//
// Created by ivan on 13-11-12.
//
//


#import "AFHTTPRequestOperation+YYJSONHelper.h"
#import "YYJSONHelper.h"


@implementation AFHTTPRequestOperation (YYJSONHelper)

- (id)responseObjectOfClass:(Class)clazz
{
    return [self.responseData toModel:clazz];
}

- (id)responseObjectsOfClass:(Class)clazz
{
    return [self.responseData toModels:clazz];
}

- (id)responseObjectOfClass:(Class)clazz forKey:(id)key
{
    return [self.responseData toModel:clazz forKey:key];
}

- (id)responseObjectsOfClass:(Class)clazz forKey:(id)key
{
    return [self.responseData toModels:clazz forKey:key];
}

- (id)responseObjectOfModelName:(NSString *)modelName
{
    return [self responseObjectOfModelName:modelName forKey:nil];
}

- (id)responseObjectsOfModelName:(NSString *)modelName
{
    return [self responseObjectsOfModelName:modelName forKey:nil];
}

- (id)responseObjectOfModelName:(NSString *)modelName forKey:(id)key
{
    if ([modelName isKindOfClass:[NSString class]] && modelName.length > 0)
    {
        return [self responseObjectOfClass:NSClassFromString(modelName) forKey:key];
    }
    else
    {
        return nil;
    }
}

- (id)responseObjectsOfModelName:(NSString *)modelName forKey:(id)key
{
    if ([modelName isKindOfClass:[NSString class]] && modelName.length > 0)
    {
        return [self responseObjectsOfClass:NSClassFromString(modelName) forKey:key];
    }
    else
    {
        return nil;
    }
}


@end