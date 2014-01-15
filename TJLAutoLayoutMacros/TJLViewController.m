//
//  TJLViewController.m
//  TJLAutoLayoutMacros
//
//  Created by Terry Lewis II on 1/13/14.
//  Copyright (c) 2014 Terry Lewis. All rights reserved.
//

#import "TJLViewController.h"
#import "TJLAutoLayoutMacros.h"
@interface TJLViewController ()

@end

@implementation TJLViewController

- (void)viewDidLoad {
    [super viewDidLoad];
	UIView *redView = [[UIView alloc]init];
    redView.translatesAutoresizingMaskIntoConstraints = NO;
    redView.backgroundColor = [UIColor redColor];
    [self.view addSubview:redView];
    
    [self.view addConstraints:@[
                                NSConstraintMakeCenter(redView, self.view),
                                NSConstraintMakeWidthAndHeightEqual(redView, 300)
                                ]];
    
    UIView *greenView = [[UIView alloc]init];
    greenView.backgroundColor = [UIColor greenColor];
    greenView.translatesAutoresizingMaskIntoConstraints = NO;
    [self.view addSubview:greenView];
    
    [self.view addConstraints:@[
                                NSConstraintMakeCenter(greenView, redView),
                                NSConstraintMakeEqualToWithOffset(greenView, TJLWidth, redView, -10),
                                NSConstraintMakeEqualToWithOffset(greenView, TJLHeight, redView, -10)
                                ]];

}

@end
