//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class FRForumRoleInfoStructModel, FRForumStructModel, FRUserApplyRoleInfoStructModel, NSArray, NSNumber, NSString;
@protocol FRForumStatDataStructModel><Optional, FRRoleMemberStructModel><Optional, Optional;

@interface FRTtdiscussV1ForumIntroductionResponseModel : TTResponseModel
{
    NSNumber *_err_no;
    NSArray<FRRoleMemberStructModel><Optional> *_role_members;
    NSString *_qr_code_uri;
    FRForumStructModel *_forum;
    NSArray<Optional> *_notice_list;
    NSString<Optional> *_err_tips;
    NSNumber *_user_id;
    NSString *_req_params;
    FRUserApplyRoleInfoStructModel<Optional> *_user_apply_info;
    FRForumRoleInfoStructModel<Optional> *_forum_role_info;
    NSArray<FRForumStatDataStructModel><Optional> *_forum_stat_data_list;
}

@property(retain, nonatomic) NSArray<FRForumStatDataStructModel><Optional> *forum_stat_data_list; // @synthesize forum_stat_data_list=_forum_stat_data_list;
@property(retain, nonatomic) FRForumRoleInfoStructModel<Optional> *forum_role_info; // @synthesize forum_role_info=_forum_role_info;
@property(retain, nonatomic) FRUserApplyRoleInfoStructModel<Optional> *user_apply_info; // @synthesize user_apply_info=_user_apply_info;
@property(retain, nonatomic) NSString *req_params; // @synthesize req_params=_req_params;
@property(retain, nonatomic) NSNumber *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSString<Optional> *err_tips; // @synthesize err_tips=_err_tips;
@property(retain, nonatomic) NSArray<Optional> *notice_list; // @synthesize notice_list=_notice_list;
@property(retain, nonatomic) FRForumStructModel *forum; // @synthesize forum=_forum;
@property(retain, nonatomic) NSString *qr_code_uri; // @synthesize qr_code_uri=_qr_code_uri;
@property(retain, nonatomic) NSArray<FRRoleMemberStructModel><Optional> *role_members; // @synthesize role_members=_role_members;
@property(retain, nonatomic) NSNumber *err_no; // @synthesize err_no=_err_no;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
