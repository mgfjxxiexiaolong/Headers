//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface TTFDashBoardTopNoticeItemView : UIView
{
    long long _cardNum;
    NSMutableArray *_cards;
}

@property(retain, nonatomic) NSMutableArray *cards; // @synthesize cards=_cards;
@property(nonatomic) long long cardNum; // @synthesize cardNum=_cardNum;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshWithActivityInfoArr:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
