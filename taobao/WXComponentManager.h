//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMapTable, NSMutableArray, NSMutableDictionary, WXComponent, WXSDKInstance;

@interface WXComponentManager : NSObject
{
    WXSDKInstance *_weexInstance;
    _Bool _isValid;
    _Bool _stopRunning;
    unsigned long long _noTaskTickCount;
    NSMapTable *_indexDict;
    NSMutableArray *_uiTaskQueue;
    NSMutableDictionary *_uiPrerenderTaskQueue;
    WXComponent *_rootComponent;
    NSMutableArray *_fixedComponents;
    struct wx_css_node *_rootCSSNode;
    CADisplayLink *_displayLink;
}

+ (void)_performBlockSyncOnComponentThread:(CDUnknownBlockType)arg1;
+ (void)_performBlockOnComponentThread:(CDUnknownBlockType)arg1;
+ (id)componentThread;
+ (id)sharedManager;
@property(readonly, nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
- (void).cxx_destruct;
- (void)removeFixedComponent:(id)arg1;
- (void)addFixedComponent:(id)arg1;
- (void)_calculateRootFrame;
- (void)_initRootCSSNode;
- (void)_syncUITasks;
- (void)_layout;
- (void)_layoutAndSyncUI;
- (void)_handleDisplayLink;
- (void)_awakeDisplayLink;
- (void)_suspendDisplayLink;
- (void)_stopDisplayLink;
- (void)_startDisplayLink;
@property(readonly, nonatomic) _Bool isValid;
- (void)invalidate;
- (void)unload;
- (void)refreshFinish;
- (void)updateFinish;
- (void)createFinish;
- (void)scrollToComponent:(id)arg1 options:(id)arg2;
- (void)removeEvent:(id)arg1 fromComponent:(id)arg2;
- (void)addEvent:(id)arg1 toComponent:(id)arg2;
- (void)updateAttributes:(id)arg1 forComponent:(id)arg2;
- (void)handleStyles:(id)arg1 forComponent:(id)arg2 isUpdateStyles:(_Bool)arg3;
- (void)handleStyleOnMainThread:(id)arg1 forComponent:(id)arg2 isUpdateStyles:(_Bool)arg3;
- (void)updatePseudoClassStyles:(id)arg1 forComponent:(id)arg2;
- (void)updateStyles:(id)arg1 forComponent:(id)arg2;
- (void)filterStyles:(id)arg1 normalStyles:(id)arg2 resetStyles:(id)arg3;
- (_Bool)isShouldReset:(id)arg1;
- (id)_extractBindingProps:(id *)arg1;
- (id)_extractBindingEvents:(id *)arg1;
- (id)_extractBindings:(id *)arg1;
- (void)addComponent:(id)arg1 toIndexDictForRef:(id)arg2;
- (id)_buildComponentForData:(id)arg1 supercomponent:(id)arg2;
- (unsigned long long)numberOfComponents;
- (id)componentForRoot;
- (id)componentForRef:(id)arg1;
- (void)_checkFixedSubcomponentToRemove:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)moveComponent:(id)arg1 toSuper:(id)arg2 atIndex:(long long)arg3;
- (void)_recursivelyAddComponent:(id)arg1 toSupercomponent:(id)arg2 atIndex:(long long)arg3 appendingInTree:(_Bool)arg4;
- (void)addComponent:(id)arg1 toSupercomponent:(id)arg2 atIndex:(long long)arg3 appendingInTree:(_Bool)arg4;
- (void)createRoot:(id)arg1;
- (void)excutePrerenderUITask:(id)arg1;
- (void)_addUITask:(CDUnknownBlockType)arg1;
- (void)_applyRootFrame:(struct CGRect)arg1 toRootCSSNode:(struct wx_css_node *)arg2;
- (void)rootViewFrameDidChange:(struct CGRect)arg1;
- (void)startComponentTasks;
- (void)_runLoopThread;
- (void)dealloc;
- (id)initWithWeexInstance:(id)arg1;

@end

