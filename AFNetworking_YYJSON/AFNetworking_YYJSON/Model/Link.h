//
//  Link.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>

@protocol Link
@end

@interface Link : NSObject <YYJSONHelperProtocol>

@property(nonatomic, assign) double   amended_len;
@property(nonatomic, assign) double   len;
@property(nonatomic, assign) double   pos;
@property(nonatomic, strong) NSString *url;
@property(nonatomic, strong) NSString *text;


@end
