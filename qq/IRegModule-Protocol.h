//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>

@protocol IRegModule <NSObject>
+ (const char *)getModuleName;
- (void)destroy;
- (unsigned int)invokeFunc:(const char *)arg1 args:(const struct tagArkVariant *)arg2 count:(unsigned int)arg3 ret:(struct tagArkVariant *)arg4 helper:(struct tagArkHostFuncs *)arg5;
- (unsigned int)hasMethod:(const char *)arg1;
- (id)initWithAppID:(const char *)arg1;
@end
