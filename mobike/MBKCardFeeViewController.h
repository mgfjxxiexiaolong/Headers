//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MBKBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MBKBuyCardView, MBKBuyCardViewModel, MBKCardBuyCellModel, MBKCardHelpCellModel, MBKCardLuckyCellModel, MBKCardSolganCellModel, MBKCardTimeCellModel, MBKCardTrialTableViewCellModel, MBKCardTypeCellModel, NSDictionary, NSMutableArray, NSString, UITableView;

@interface MBKCardFeeViewController : MBKBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _loadDataFromUserInfo;
    _Bool _isHaveDeposit;
    _Bool _isOutMaxTime;
    NSString *_monthCardName;
    NSDictionary *_selectPriceDic;
    UITableView *_cardFeeTableView;
    NSMutableArray *_cardFeeArray;
    MBKBuyCardView *_buyCardView;
    MBKCardTypeCellModel *_cardTypeCellModel;
    MBKCardSolganCellModel *_cardSolganCellModel;
    MBKCardTimeCellModel *_cardTimeCellModel;
    MBKCardTrialTableViewCellModel *_cardTrailCellModel;
    MBKCardBuyCellModel *_cardBuyInfoCellModel;
    MBKCardHelpCellModel *_cardHelpCellModel;
    MBKBuyCardViewModel *_buyCardViewModel;
    MBKCardLuckyCellModel *_cardLuckyCellModel;
    NSString *_ridingBalanceReal;
    NSString *_ridingBalanceSend;
}

@property(retain, nonatomic) NSString *ridingBalanceSend; // @synthesize ridingBalanceSend=_ridingBalanceSend;
@property(retain, nonatomic) NSString *ridingBalanceReal; // @synthesize ridingBalanceReal=_ridingBalanceReal;
@property(retain, nonatomic) MBKCardLuckyCellModel *cardLuckyCellModel; // @synthesize cardLuckyCellModel=_cardLuckyCellModel;
@property(retain, nonatomic) MBKBuyCardViewModel *buyCardViewModel; // @synthesize buyCardViewModel=_buyCardViewModel;
@property(retain, nonatomic) MBKCardHelpCellModel *cardHelpCellModel; // @synthesize cardHelpCellModel=_cardHelpCellModel;
@property(retain, nonatomic) MBKCardBuyCellModel *cardBuyInfoCellModel; // @synthesize cardBuyInfoCellModel=_cardBuyInfoCellModel;
@property(retain, nonatomic) MBKCardTrialTableViewCellModel *cardTrailCellModel; // @synthesize cardTrailCellModel=_cardTrailCellModel;
@property(retain, nonatomic) MBKCardTimeCellModel *cardTimeCellModel; // @synthesize cardTimeCellModel=_cardTimeCellModel;
@property(retain, nonatomic) MBKCardSolganCellModel *cardSolganCellModel; // @synthesize cardSolganCellModel=_cardSolganCellModel;
@property(retain, nonatomic) MBKCardTypeCellModel *cardTypeCellModel; // @synthesize cardTypeCellModel=_cardTypeCellModel;
@property(retain, nonatomic) MBKBuyCardView *buyCardView; // @synthesize buyCardView=_buyCardView;
@property(retain, nonatomic) NSMutableArray *cardFeeArray; // @synthesize cardFeeArray=_cardFeeArray;
@property(retain, nonatomic) UITableView *cardFeeTableView; // @synthesize cardFeeTableView=_cardFeeTableView;
@property(retain, nonatomic) NSDictionary *selectPriceDic; // @synthesize selectPriceDic=_selectPriceDic;
@property(retain, nonatomic) NSString *monthCardName; // @synthesize monthCardName=_monthCardName;
@property(nonatomic) _Bool isOutMaxTime; // @synthesize isOutMaxTime=_isOutMaxTime;
@property(nonatomic) _Bool isHaveDeposit; // @synthesize isHaveDeposit=_isHaveDeposit;
@property(nonatomic) _Bool loadDataFromUserInfo; // @synthesize loadDataFromUserInfo=_loadDataFromUserInfo;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)loadNomal;
- (void)updateVCInfoWithUserInfo:(id)arg1 withPaymentBonus:(id)arg2;
- (void)updateVCInfoWithUserInfo:(id)arg1;
- (void)getAcountInfo;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)buyCardAction:(id)arg1;
- (void)selectCardAction:(id)arg1;
- (void)goToCardPayWithDic:(id)arg1;
- (void)goToDeposit;
- (void)uploadLog;
- (_Bool)isCloseAccount;
- (void)setBalance:(id)arg1;
- (id)removeFloatAllZero:(id)arg1;
- (void)addcardLuckyCellModel;
- (void)addCardTimeCellModel;
- (void)addCardTrailCellModel;
- (void)addCardSolganCellModel;
- (void)refreshLabelCells;
- (void)refreshBuyCardViewModel:(id)arg1;
- (void)addBuyCardViewModel;
- (void)addCardHelpCellModel;
- (void)refreshCardBuyCellModel:(id)arg1;
- (void)refreshCardBuyCellModelWithPaylistModel:(id)arg1;
- (void)addCardBuyInfoCellModel;
- (void)refreshCardTypeCellModel:(id)arg1;
- (void)addCardTypeCellModel;
- (void)refreshModelsWithUserInfo:(id)arg1;
- (void)registerTableViewCell;
- (void)setupView;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (id)createNavigationBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
