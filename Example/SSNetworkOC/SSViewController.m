//
//  SSViewController.m
//  SSNetworkOC
//
//  Created by SSPSource on 11/19/2019.
//  Copyright (c) 2019 SSPSource. All rights reserved.
//

#import "SSViewController.h"
#import "BusinessNetAPI.h"

@interface SSViewController ()

@end

@implementation SSViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    NSDictionary *paraDic=@{@"username":@"",@"password":@""};
    [BusinessNetAPI GET:R_authservice_login parameters:paraDic success:^(id  _Nullable response) {
        dispatch_async(dispatch_get_main_queue(), ^{
                               
                                      
                                     });
    } failure:^(NSError * _Nullable error) {
        dispatch_async(dispatch_get_main_queue(), ^{
                               
                                      
                                     });
    }];
	
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
