//
//  Source.h
//
//  Created by  Ivan on 13-11-12
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <YYJSONHelper/YYJSONHelper.h>


@interface Source : NSObject <YYJSONHelperProtocol>

@property(nonatomic, strong) NSString *link;
@property(nonatomic, strong) NSString *name;
@property(nonatomic, strong) NSString *client_id;


@end
