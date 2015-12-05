//
//  MRCTabBarController.h
//  MVVMReactiveCocoa
//
//  Created by leichunfeng on 15/1/9.
//  Copyright (c) 2015年 leichunfeng. All rights reserved.
//

#import "MRCViewController.h"
#import "WXTabBarController.h"

@interface MRCTabBarController : MRCViewController <UITabBarControllerDelegate>

@property (nonatomic, strong, readonly) WXTabBarController *tabBarController;

@end
