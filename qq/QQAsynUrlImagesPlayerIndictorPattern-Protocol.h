//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/NSObject-Protocol.h>
#import <QQMainProject/UITableViewDelegate-Protocol.h>

@class QQAsynUrlImagesPlayer, UIView;

@protocol QQAsynUrlImagesPlayerIndictorPattern <NSObject, UITableViewDelegate>
- (UIView *)indicatorViewInImagesPlayer:(QQAsynUrlImagesPlayer *)arg1;

@optional
- (void)imagesPlayer:(QQAsynUrlImagesPlayer *)arg1 didChangedIndex:(long long)arg2 count:(long long)arg3;
@end
