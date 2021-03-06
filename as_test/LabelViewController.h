//
//  FirstViewController.h
//  as_test
//
//  Created by Tia Shelley on 1/16/13.
//  Copyright (c) 2013 Tia Shelley. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AnalyzeViewController.h"

@interface LabelViewController : UIViewController <UITextFieldDelegate, UIAlertViewDelegate, UITextViewDelegate>
{
    UITableView* labelTable;
    NSMutableArray* tableData;
    IBOutlet UITextField *addLabelText;
    IBOutlet UIButton *rightArrowButton;
    IBOutlet UIButton *leftArrowButton;
    IBOutlet UIImageView *notesBG;
    IBOutlet UITextView *notesField;
    IBOutlet UILabel *username;
}

@property (strong, nonatomic) IBOutlet UILabel *totalNumberOfRecords;
@property (strong, nonatomic) IBOutlet UILabel *currentRecordNumber;
@property (strong, nonatomic) AnalyzeViewController *av;
@property (strong, nonatomic) IBOutlet UIButton *editModeButton;
@property (strong, nonatomic) UITableView* labelTable;
@property (strong, nonatomic) NSMutableArray* tableData;
@property (retain, nonatomic) IBOutlet UITextField *addLabelText;
@property (strong, nonatomic) NSMutableDictionary* captureRecords;
@property (strong, nonatomic) IBOutlet UIButton *rightArrowButton;
@property (strong, nonatomic) IBOutlet UIButton *leftArrowButton;
@property (strong, nonatomic) NSDate *begin;
@property (strong, nonatomic) NSDate *end;
@property (strong, nonatomic) NSString *scientist;
@property (strong, nonatomic) NSString *user;

@end
