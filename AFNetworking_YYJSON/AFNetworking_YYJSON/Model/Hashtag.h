//
//  Hashtag.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>

@protocol Hashtag
@end

@interface Hashtag : NSObject <YYJSONHelperProtocol>

@property(nonatomic, strong) NSString *name;
@property(nonatomic, assign) double   len;
@property(nonatomic, assign) double   pos;

@end
