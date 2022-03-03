//
//  RoleInfo.h
//  DDGameSDKDemo
//
//  Created by MHJZ on 2022/2/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RoleInfo : NSObject
@property (nonatomic, copy) NSString *roleId;
@property (nonatomic, copy) NSString *roleLevel;
@property (nonatomic, copy) NSString *roleName;
@property (nonatomic, copy) NSString *serverId;
@property (nonatomic, copy) NSString *serverName;
@end

@interface SDKConfig : NSObject
@property (nonatomic, copy) NSString *appID;
@property (nonatomic, copy) NSString *appKey;
@property (nonatomic, copy) NSString *sdkTag;
@end

NS_ASSUME_NONNULL_END
