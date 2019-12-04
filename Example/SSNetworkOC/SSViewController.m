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
    UIButton *btn=[[UIButton alloc] initWithFrame:CGRectMake(0, 100, 100, 50)];
    [btn setBackgroundColor:[UIColor redColor]];
    [btn addTarget:self action:@selector(reqbase) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:btn];
   
	
}
-(void)reqbase{
     NSDictionary *paraDic=@{@"username":@"cszh",@"password":@"123456"};
    [BusinessNetAPI GET:R_authservice_login parameters:paraDic success:^(id  _Nullable response) {
          
       } failure:^(NSError * _Nullable error) {
            NSLog(@"==dsd current==%@===%@",[NSThread currentThread],[NSThread mainThread]);
           
       }];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
