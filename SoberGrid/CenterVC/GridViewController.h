//
//  CenterVC.h
//  SoberGrid
//
//  Created by Matthew James on 9/2/14.
//  Copyright (c) 2014 Accucode Inc. All rights reserved.
//


#import "ODRefreshControl.h"
#import "ApiClass.h"
#import "FilterVC.h"
#import "UserChoicesView.h"
#import "CommonApiCall.h"
#import "XHLocationHelper.h"
@class  MainVC;
@interface GridViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate,ApiclassDelegate,FilterDelegate,UserChoicesViewDelegate,UISearchBarDelegate,UserChoicesViewDelegate,CommonApiCallDelegate>
{
    UICollectionView *mainCollectionView;
    NSMutableArray   *arrFinalObjects;
    UISearchBar *topsearchBar;
    BOOL isApiRunning;
    UIView *barWrapper;

    BOOL isFilterApplied;
    int offset;
    int searchOffset;

}
@property (nonatomic,strong)NSMutableArray   *arrFinalObjects;
@property (nonatomic) UIActivityViewController *activityViewController;

@property (nonatomic,assign) BOOL inSearchMode;
@property (nonatomic,strong)NSArray *products;
@property (nonatomic,strong) NSMutableArray* arr;
@property (weak, nonatomic) IBOutlet UIScrollView *pagingScrollView;
@property (nonatomic,retain) NSArray* ResponseArray;


// For PUll to refresh variables
@property (nonatomic,strong)XHLocationHelper  *locHelper;

@end
