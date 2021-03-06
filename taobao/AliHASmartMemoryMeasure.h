//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, UIViewController;

@interface AliHASmartMemoryMeasure : NSObject
{
    _Bool _enableContextLog;
    _Bool _enableNSLog;
    _Bool _inMonitor;
    _Bool _shouldSaveHistoryData;
    int _uploadCount;
    int _maxUploadCount;
    float _uploadToServerRate;
    id _context;
    NSDictionary *_parameters;
    NSMutableDictionary *_historyViewControllerMemoryMap;
    NSMutableDictionary *_viewControllerMemoryMap;
    NSMutableArray *_currentViewControllerFootprintList;
    NSMutableArray *_viewControllerIdentifierList;
    UIViewController *_currentViewController;
    NSString *_currentViewControllerIdentifier;
    NSMutableArray *_performanceSampleList;
    double _sampleInterval;
    double _startupProtectTime;
    NSTimer *_sampleTimer;
    double _lastUpdateHistoryTime;
    unsigned long long _minUploadMemoryFootprint;
    NSString *_reportExceptionType;
    NSMutableArray *_viewControllerPtrList;
}

@property(nonatomic) float uploadToServerRate; // @synthesize uploadToServerRate=_uploadToServerRate;
@property(retain, nonatomic) NSMutableArray *viewControllerPtrList; // @synthesize viewControllerPtrList=_viewControllerPtrList;
@property(retain, nonatomic) NSString *reportExceptionType; // @synthesize reportExceptionType=_reportExceptionType;
@property(nonatomic) int maxUploadCount; // @synthesize maxUploadCount=_maxUploadCount;
@property(nonatomic) int uploadCount; // @synthesize uploadCount=_uploadCount;
@property(nonatomic) _Bool shouldSaveHistoryData; // @synthesize shouldSaveHistoryData=_shouldSaveHistoryData;
@property(nonatomic) unsigned long long minUploadMemoryFootprint; // @synthesize minUploadMemoryFootprint=_minUploadMemoryFootprint;
@property(nonatomic) double lastUpdateHistoryTime; // @synthesize lastUpdateHistoryTime=_lastUpdateHistoryTime;
@property(nonatomic) _Bool inMonitor; // @synthesize inMonitor=_inMonitor;
@property(retain, nonatomic) NSTimer *sampleTimer; // @synthesize sampleTimer=_sampleTimer;
@property(nonatomic) double startupProtectTime; // @synthesize startupProtectTime=_startupProtectTime;
@property(nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(retain, nonatomic) NSMutableArray *performanceSampleList; // @synthesize performanceSampleList=_performanceSampleList;
@property(retain, nonatomic) NSString *currentViewControllerIdentifier; // @synthesize currentViewControllerIdentifier=_currentViewControllerIdentifier;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(retain, nonatomic) NSMutableArray *viewControllerIdentifierList; // @synthesize viewControllerIdentifierList=_viewControllerIdentifierList;
@property(retain, nonatomic) NSMutableArray *currentViewControllerFootprintList; // @synthesize currentViewControllerFootprintList=_currentViewControllerFootprintList;
@property(retain, nonatomic) NSMutableDictionary *viewControllerMemoryMap; // @synthesize viewControllerMemoryMap=_viewControllerMemoryMap;
@property(retain, nonatomic) NSMutableDictionary *historyViewControllerMemoryMap; // @synthesize historyViewControllerMemoryMap=_historyViewControllerMemoryMap;
@property(nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(nonatomic) _Bool enableNSLog; // @synthesize enableNSLog=_enableNSLog;
@property(nonatomic) _Bool enableContextLog; // @synthesize enableContextLog=_enableContextLog;
@property(nonatomic) __weak id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)handleMemoryWarning;
- (void)log:(id)arg1;
- (void)stopMonitor;
- (void)onSampleLogic;
- (void)onViewDidDisappear:(id)arg1;
- (void)onViewWillAppear:(id)arg1;
- (void)onViewDidLoad:(id)arg1;
- (unsigned long long)calcMemoryUsage;
- (void)startMonitor;
- (_Bool)canMonitorController:(id)arg1;
- (void)saveHistoryData;
- (void)loadHistoryData;
- (id)filePathForMemoryMeasureHistroy;
- (_Bool)canUploadToServer;
- (id)init;
- (void)reportException:(id)arg1 summary:(id)arg2 detail:(id)arg3;

@end

