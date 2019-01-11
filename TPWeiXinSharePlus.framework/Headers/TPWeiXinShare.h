//
//  TPWeiXinShare.h
//  IMDemo
//
//  Created by kingdomrain on 2018/12/13.
//  Copyright © 2018 sunline. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TPWeiXinShare <JSExport>
@property(nonatomic,copy)NSString *title;
@property(nonatomic,copy)NSString *description;
@property(nonatomic,copy)NSString *sence;
@property(nonatomic,copy)NSString *image_url;
@property(nonatomic,copy)NSString *media_url;
@property(nonatomic,strong) JSValue *success;
@property(nonatomic,strong) JSValue *error;

- (void)share;

@end

@interface TPWeiXinShare : NSObject<TPWeiXinShare>

@end

NS_ASSUME_NONNULL_END
