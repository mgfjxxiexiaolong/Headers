//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVMoreAction.h"

@class TTVDislikeActionEntity;

@interface TTVDislikeAction : TTVMoreAction
{
    CDUnknownBlockType _didClickDislikeSubmitButtonBlock;
    CDUnknownBlockType _didTrakDislikeSubmiteActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didTrakDislikeSubmiteActionBlock; // @synthesize didTrakDislikeSubmiteActionBlock=_didTrakDislikeSubmiteActionBlock;
@property(copy, nonatomic) CDUnknownBlockType didClickDislikeSubmitButtonBlock; // @synthesize didClickDislikeSubmitButtonBlock=_didClickDislikeSubmitButtonBlock;
- (void).cxx_destruct;
- (void)trackAdDislikeClick;
- (void)execute:(long long)arg1;
- (void)exploreDislikeViewOKBtnClicked:(id)arg1;
- (id)initWithEntity:(id)arg1;

// Remaining properties
@property(retain, nonatomic) TTVDislikeActionEntity *entity; // @dynamic entity;

@end

