//
//  AffUIToolBar.m
//  AnimationFilmFansDemo
//
//  Created by jiangjun on 14-3-11.
//  Copyright (c) 2014年 jiangjun. All rights reserved.
//

#import "AffUIToolBar.h"

@implementation AffUIToolBar
+ (id)lableCgrectmake:(CGRect)make lableNametext:(NSString *)text {
    UILabel *lable = JJAutorelease([[UILabel alloc]initWithFrame:make]);
    lable.text = text;
    
  
    lable.backgroundColor = [UIColor clearColor];
    lable.textAlignment = NSTextAlignmentRight;
    
    return lable;
    
}
+ (id)showcoreAnimation {
    CATransition *animation = [CATransition animation];
    // animation.type = @"cube";
    NSMutableArray *transion = [[NSMutableArray alloc]initWithObjects:@"cube",@"moveIn",@"reveal",@"fade", @"pageCurl",@"pageUnCurl",@"suckEffect",@"rippleEffect", @"oglFlip", nil];
    NSString *tion = [transion objectAtIndex:arc4random()%9];
    animation.type = tion;
    animation.duration = 2;
    animation.subtype = kCATransitionFromLeft;
    animation.timingFunction = [CAMediaTimingFunction functionWithName:kCAMediaTimingFunctionEaseIn];
    return animation;
}


+ (id)buttonCGRectmake:(CGRect)make  withText:(NSString *)title andTarget:(id)target andACtion:(SEL)sel andtag:(int)tag {
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    [button setTitle:title forState:UIControlStateNormal];
    button.frame= make;
    button.tag = tag;
    [button addTarget:target action:sel forControlEvents:UIControlEventTouchUpInside];
    return button;
}
+ (id)textFieldrect:(CGRect)rect anddelegate:(id)delegate andTag:(int)tag andplaceholder:(NSString *)place {
    UITextField *textField = [[UITextField alloc]initWithFrame:rect];
    textField.delegate = delegate;
    textField.tag = tag;
    textField.borderStyle = UITextBorderStyleRoundedRect;
    textField.autocapitalizationType = UITextAutocorrectionTypeNo;
    textField.placeholder = place;
    return textField;
    
}
+ (id)imageviewRect:(CGRect)rect andimage:(UIImage *)image {
    UIImageView *imageview = [[UIImageView alloc]initWithFrame:rect];
    imageview.image = image;
    
    
    return imageview;
    
    
}
@end