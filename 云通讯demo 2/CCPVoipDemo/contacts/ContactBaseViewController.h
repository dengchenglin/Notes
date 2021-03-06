//
//  ContactBaseViewController.h
//  CCPVoipDemo
//
//  Created by wang ming on 14-3-14.
//  Copyright (c) 2014年 hisun. All rights reserved.
//

#import "UIBaseViewController.h"


#define TABLE_BACKGROUNDCOLOR       [UIColor colorWithRed:221./255 green:223.0/255 blue:227.0/255 alpha:1.0f]
#define SEARCHBAR_BACKGROUNDCOLOR       [UIColor colorWithRed:161./255 green:161./255 blue:161./255 alpha:1.0f]
#define ContactsViewController_ContactsTableView  999

@interface ContactPhone : NSObject
{
    NSString* contactName;
    NSString* contactPhone;
    NSString* contactKey;
    NSString* pinyin;
    BOOL inAddressBook;
}
@property (nonatomic, assign) BOOL inAddressBook;
@property (nonatomic, retain) NSString* name;
@property (nonatomic, retain) NSString* phone;
@property (nonatomic, retain) NSString* key;
@property (nonatomic, assign) NSUInteger contactID;
@property (nonatomic, retain) NSString* pinyin;
@end

@interface ContactBaseViewController : UIBaseViewController<UITableViewDataSource,UITableViewDelegate,UISearchDisplayDelegate,UISearchBarDelegate,UINavigationControllerDelegate>
{
    NSMutableDictionary *ContactsList;
    NSMutableArray     *keys;//通讯录包含的拼音头
    NSArray *keyArray;	//全部的拼音头
	UILabel *label;//
    UIImageView * popLabelBackImg;//
    UISearchBar *selSearchBar;
	UISearchDisplayController *searchDC;
    BOOL isKeyboardAscii;
    UIView* foundKeyboard;
    NSMutableDictionary* sectionViewDic;
}

@property (nonatomic,retain) NSMutableDictionary *ContactsList;
@property (nonatomic,retain) NSMutableArray *keys;
@property (nonatomic,retain) UITableView *tableview;
@property (nonatomic,retain) NSMutableArray    *filteredListContent;
- (void) CreatePopView;
- (void) LoadContactTableView;
- (void) partialSearchData:(NSNotification *)data;
- (void) filterContentForSearchText:(NSString*)searchText;
- (void) hideKeyPad;


@end
