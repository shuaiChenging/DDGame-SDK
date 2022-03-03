//
//  DDGameManage.h
//  DDGameSDKDemo
//
//  Created by MHJZ on 2022/2/10.
//

#import <UIKit/UIKit.h>
#import "RoleInfo.h"
#import "CenterInfo.h"
typedef void (^LoginSuccess)(void);
typedef void (^ChangeAccount)(void);
NS_ASSUME_NONNULL_BEGIN

@interface DDGameManage : NSObject

/// sdk初始化，获取配置信息，初始化IQKeyboardManager
/// @param config 配置
+ (void)gameInitWithConfig:(SDKConfig *)config;

/// 初始化登录页面
/// @param success 登录成功回调
+ (void)loadLoginViewWithLoginSuccess:(LoginSuccess )success;

/// 退出重新登录页面
/// @param success 登录成功回调
+ (void)reloadLoginViewWithLoginSuccess:(LoginSuccess )success;

/// 加载中心页面
/// @param commodity 商品名称
/// @param number 数量
/// @param info 商品信息
+ (void)loadCenterViewWithCommodity:(NSString *)commodity
                             number:(NSString *)number
                         centerInfo:(CenterInfo *)info;

/// 隐藏游戏小球
+ (void)hiddenCatalogueBall;

/// 展示实名认证页面
/// @param change 切换账户回调
+ (void)showNameIdentificationViewWithChangeAccount:(ChangeAccount )change;

/// 配置角色信息
/// @param info 角色信息
+ (void)setRoleInfo:(RoleInfo *)info;

/// 其他app的回调处理
+ (void)callBackHandle;

/// 打开IQKeyboardManager功能
+ (void)openKeyboardManager;

/// 关闭IQKeyboardManager功能
+ (void)closeKeyboardManager;

@end

NS_ASSUME_NONNULL_END
