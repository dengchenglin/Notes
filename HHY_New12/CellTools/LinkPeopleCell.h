//
//  LinkPeopleCell.h
//  HHY
//
//  Created by jiangjun on 14-5-21.
//  Copyright (c) 2014年 yunluosoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LinkPeopleCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *nameLable;
@property (weak, nonatomic) IBOutlet UILabel *phoneLable;
@property (weak, nonatomic) IBOutlet UILabel *emailLable;
@property (weak, nonatomic) IBOutlet UITextField *nameTF;
@property (weak, nonatomic) IBOutlet UITextField *phoneTF;
@property (weak, nonatomic) IBOutlet UITextField *emainTF;

@property (nonatomic,assign) BOOL isEit;

@end