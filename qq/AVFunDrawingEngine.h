//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AVFunDrawingEngine : NSObject
{
}

+ (id)GetInstance;
- (_Bool)parsePointInfo:(char *)arg1 length:(int)arg2;
- (_Bool)sendVersionInfo:(int)arg1 supportDrawing:(int)arg2 peerUin:(unsigned long long)arg3;
- (_Bool)sendPointInfo:(struct CGPoint)arg1 screenSize:(struct CGSize)arg2 pointType:(int)arg3 penType:(int)arg4 penName:(id)arg5 penColor:(id)arg6 penWidth:(int)arg7 peerUin:(unsigned long long)arg8;

@end

