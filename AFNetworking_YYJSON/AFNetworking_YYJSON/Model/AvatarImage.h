//
//  AvatarImage.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "YYJSONHelper.h"

@interface AvatarImage : NSObject <YYJSONHelperProtocol>

@property(nonatomic, assign) double   width;
@property(nonatomic, strong) NSString *URLString;   // custom bind
@property(nonatomic, assign) BOOL     is_default;
@property(nonatomic, assign) double   height;

@end
