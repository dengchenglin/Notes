//
//  HotelCell.h
//  HHY
//
//  Created by jiangjun on 14-4-23.
//  Copyright (c) 2014年 yunluosoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HotelCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *headImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLable;
@property (weak, nonatomic) IBOutlet UILabel *scroceLable;
@property (weak, nonatomic) IBOutlet UILabel *DetLable;
@property (weak, nonatomic) IBOutlet UILabel *priceLable;
@property (weak, nonatomic) IBOutlet UIImageView *lineview;
@property (nonatomic,copy)NSString *grade;



@end