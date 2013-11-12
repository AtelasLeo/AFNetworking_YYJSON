//
//  CoverImage.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>


@interface CoverImage : NSObject <YYJSONHelperProtocol>

@property(nonatomic, assign) double   width;
@property(nonatomic, strong) NSString *url;
@property(nonatomic, assign) BOOL     isDefault;   //custom bind
@property(nonatomic, assign) double   height;


@end
