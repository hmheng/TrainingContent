//
//  FileDetailsViewController.h
//  O365-Files-App
//
//  Created by Lucas Damian Napoli on 24/10/14.
//  Copyright (c) 2014 MS Open Tech. All rights reserved.
//

#import "ViewController.h"
#import <MSGraph-SDK-iOS/MSGraphServiceClient.h>
#import "ExchangeGraphService.h"

@interface FolderContentViewController : ViewController
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UILabel *folderName;
@property (nonatomic) UIActivityIndicatorView* spinner;

@property (nonatomic) MSGraphServiceMailFolder *currentFolder;
@property (nonatomic) NSArray *folderMessages;
@property (nonatomic) MSGraphServiceMessage *currentMsg;

@end
