//
// Created by ivan on 13-11-12.
//
//


#import <AFNetworking/AFHTTPRequestOperation.h>
#import <YYJSONHelper/YYJSONHelper.h>
#import "YYTestVC.h"
#import "BaseClass.h"
#import "AFHTTPRequestOperation+YYJSONHelper.h"

@implementation YYTestVC

- (void)loadView
{
    [super loadView];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    UIBarButtonItem *rightBarButtonItem = [[UIBarButtonItem alloc] initWithBarButtonSystemItem:UIBarButtonSystemItemRefresh target:self action:@selector(refresh:)];
    self.navigationItem.rightBarButtonItem = rightBarButtonItem;
    self.textView                          = [[UITextView alloc] initWithFrame:self.view.bounds];
    _textView.editable                     = NO;
    _textView.autoresizingMask             = UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:_textView];
}

- (void)refresh:(id)sender
{
    self.navigationItem.rightBarButtonItem.enabled = NO;
    NSURL                  *url              = [NSURL URLWithString:@"https://alpha-api.app.net/stream/0/posts/stream/global"];
    NSURLRequest           *request          = [NSURLRequest requestWithURL:url];
    AFHTTPRequestOperation *requestOperation = [[AFHTTPRequestOperation alloc] initWithRequest:request];
    [requestOperation setCompletionBlockWithSuccess:^(AFHTTPRequestOperation *operation, id responseObject) {
        self.navigationItem.rightBarButtonItem.enabled = YES;
        BaseClass *baseClass                           = [operation responseObjectOfModelName:@"BaseClass"];
        _textView.text = baseClass.YYJSONString;

    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        self.navigationItem.rightBarButtonItem.enabled = YES;
    }];
    [requestOperation start];

}


@end