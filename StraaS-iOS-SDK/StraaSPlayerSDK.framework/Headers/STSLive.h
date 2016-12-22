//
//  STSLive.h
//  StraaS
//
//  Created by shihwen.wang on 2016/8/31.
//  Copyright © 2016年 StraaS.io. All rights reserved.
//

#import "LHDataObject.h"
#import "STSVideo.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Live model of StraaS player SDK
 */
@interface STSLive : LHDataObject

/**
 *  The live id.
 */
@property (nonatomic, readonly) NSString * liveId;

/**
 *  The id of the account which the resource belongs to.
 */
@property (nonatomic, readonly) NSString * accountId;

/**
 *  The title of the live.
 */
@property (nonatomic, readonly) NSString * title;

/**
 *  The synopsis of the live.
 */
@property (nonatomic, readonly) NSString * synopsis;

/**
 *  The status of the live.(ready|started|ended)
 */
@property (nonatomic, readonly) NSString * status;

/**
 *  The start time of the live event.
 */
@property (nonatomic, readonly) NSString * startTime;

/**
 *  The starting time of live streaming.
 */
@property (nonatomic, readonly) NSString * startedAt;

/**
 *  The ending time of live streaming.
 */
@property (nonatomic, readonly) NSString * endedAt;

/**
 *  The large size thumbnail of thumbnail_urls.
 */
@property (nonatomic, readonly, nullable) NSString * posterUrl;

/**
 *  The VODs of the live event.
 */
@property (nonatomic, readonly, nullable) NSArray <STSVideo *> * videos;

/**
 *  Indicates whether the live is free of not.
 */
@property (nonatomic, readonly) BOOL free;

/**
 *  Indicate if the source is 360-degree streaming or not.
 *  "equirectangular" if the source is 360-degree streaming. "flat" if not.
 */
@property (nonatomic, readonly) NSString * projection;

@end

NS_ASSUME_NONNULL_END
