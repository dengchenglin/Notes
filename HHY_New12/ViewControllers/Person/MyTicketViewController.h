//
//  MyTicketViewController.h
//  HHY
//
//  Created by jiangjun on 14-4-25.
//  Copyright (c) 2014年 yunluosoft. All rights reserved.
//

#import "RootViewController.h"
#import "ChangeDateSQViewController.h"
#import "AirReturnTicketSQViewController.h"
@interface MyTicketViewController : RootViewController<UITableViewDataSource,UITableViewDelegate>
{
    BOOL isHotel;
    UITableView *_tableView;
    UITableView *_hotelTableView;
}
@property(nonatomic,retain)NSMutableArray *dataTicketArray;
@property(nonatomic,retain)NSMutableArray *dataHotelArray;
@end
