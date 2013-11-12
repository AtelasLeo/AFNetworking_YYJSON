//
//  User.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DescriptionClass, AvatarImage, CoverImage, Counts;

@interface User : NSObject <YYJSONHelperProtocol>


@property(nonatomic, strong) NSString         *userIdentifier;
@property(nonatomic, strong) DescriptionClass *description;
@property(nonatomic, strong) AvatarImage      *avatar_image;
@property(nonatomic, strong) NSString         *created_at;
@property(nonatomic, strong) CoverImage       *cover_image;
@property(nonatomic, strong) NSString         *locale;
@property(nonatomic, strong) NSString         *type;
@property(nonatomic, strong) NSString         *verified_domain;
@property(nonatomic, strong) NSString         *canonical_url;
@property(nonatomic, strong) Counts           *counts;
@property(nonatomic, strong) NSString         *username;
@property(nonatomic, strong) NSString         *timezone;
@property(nonatomic, strong) NSString         *name;


@end
