//
//  WTKBasedViewModel.h
//  WTKWineMVVM
//
//  Created by wenchanglin on 2017/5/14.
//  Copyright © 2017年 wenchanglin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WTKViewModelServices.h"
#import "WTKViewModelNavigationImpl.h"
@interface WTKBasedViewModel : NSObject

@property(nonatomic,copy)NSString *title;
@property(nonatomic,strong,readonly)id<WTKViewModelServices> services;
@property(nonatomic,strong)WTKViewModelNavigationImpl *naviImpl;
@property (nonatomic, copy, readonly) NSDictionary *params;
- (instancetype)initWithService:(id<WTKViewModelServices>)service params:(NSDictionary *)params;

/**
 *  判断是否登录
 *  @param  goLogin 如果没有登录，是否跳转到登录页面
 */
- (BOOL)judgeWhetherLogin:(BOOL)goGoLogin;

@end
