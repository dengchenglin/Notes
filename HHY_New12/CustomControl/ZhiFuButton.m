//
//  ZhiFuButton.m
//  HHY
//
//  Created by jiangjun on 14-5-4.
//  Copyright (c) 2014年 yunluosoft. All rights reserved.
//

#import "ZhiFuButton.h"

@implementation ZhiFuButton

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
        [self createButton];
        self.backgroundColor = [UIColor whiteColor];
    }
    return self;
}

-(void)createButton
{
    self.headView = [[UIImageView alloc] initWithFrame:CGRectMake(27, 7, 15, 15)];
    [self addSubview:self.headView];
    self.headLable = [[UILabel alloc] initWithFrame:CGRectMake(50, 0, 200, 30)];
    self.headLable.textAlignment = NSTextAlignmentLeft;
    self.headLable.backgroundColor = [UIColor clearColor];
    [self addSubview:self.headLable];
    
    self.rightView = [[UIImageView alloc] initWithFrame:CGRectMake(289, 9, 6, 12)];
    self.rightView.image = [UIImage imageNamed:@"rightarrow"];
    [self addSubview:self.rightView];
}

-(void)setheadImage:(NSString *)imageString
{
    self.headView.image = [UIImage imageNamed:imageString];
}

-(void)setHeadTitle:(NSString *)title
{
    self.headLable.text = title;
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/

@end
