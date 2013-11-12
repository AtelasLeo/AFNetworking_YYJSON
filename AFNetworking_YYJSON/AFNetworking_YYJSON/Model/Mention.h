//
//  Mention.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>


@protocol Mention
@end

@interface Mention : NSObject <YYJSONHelperProtocol>

@property(nonatomic, strong) NSString *mentionsIdentifier;
@property(nonatomic, assign) double   len;
@property(nonatomic, assign) double   pos;
@property(nonatomic, strong) NSString *name;
@end
