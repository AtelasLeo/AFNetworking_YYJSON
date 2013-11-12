//
//  Entity.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>

@protocol Mention;
@protocol Hashtag;
@protocol Link;


@protocol Entity
@end

@interface Entity : NSObject <YYJSONHelperProtocol>

@property(nonatomic, strong) NSArray <Link>    *links;
@property(nonatomic, strong) NSArray <Hashtag> *hashtags;
@property(nonatomic, strong) NSArray <Mention> *mentions;
@end
