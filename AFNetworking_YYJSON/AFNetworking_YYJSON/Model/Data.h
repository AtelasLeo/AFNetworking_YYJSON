//
//  Data.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>

@class Source, Entity, User;

@protocol Data
@end

@interface Data : NSObject <YYJSONHelperProtocol>

@property(nonatomic, strong) NSString *dataIdentifier;
@property(nonatomic, strong) NSString *thread_id;
@property(nonatomic, strong) NSString *canonical_url;
@property(nonatomic, strong) NSString *created_at;
@property(nonatomic, strong) NSString *pagination_id;
@property(nonatomic, strong) NSString *text;
@property(nonatomic, assign) double   num_reposts;
@property(nonatomic, assign) double   num_replies;
@property(nonatomic, assign) double   num_stars;
@property(nonatomic, assign) BOOL     machine_only;
@property(nonatomic, strong) Source   *source;
@property(nonatomic, strong) Entity   *entities;
@property(nonatomic, strong) User     *user;
@property(nonatomic, strong) NSString *html;


@end
