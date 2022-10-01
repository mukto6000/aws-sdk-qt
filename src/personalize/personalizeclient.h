// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZECLIENT_H
#define QTAWS_PERSONALIZECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspersonalizeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Personalize {

class PersonalizeClientPrivate;
class CreateBatchInferenceJobRequest;
class CreateBatchInferenceJobResponse;
class CreateBatchSegmentJobRequest;
class CreateBatchSegmentJobResponse;
class CreateCampaignRequest;
class CreateCampaignResponse;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateDatasetExportJobRequest;
class CreateDatasetExportJobResponse;
class CreateDatasetGroupRequest;
class CreateDatasetGroupResponse;
class CreateDatasetImportJobRequest;
class CreateDatasetImportJobResponse;
class CreateEventTrackerRequest;
class CreateEventTrackerResponse;
class CreateFilterRequest;
class CreateFilterResponse;
class CreateRecommenderRequest;
class CreateRecommenderResponse;
class CreateSchemaRequest;
class CreateSchemaResponse;
class CreateSolutionRequest;
class CreateSolutionResponse;
class CreateSolutionVersionRequest;
class CreateSolutionVersionResponse;
class DeleteCampaignRequest;
class DeleteCampaignResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteDatasetGroupRequest;
class DeleteDatasetGroupResponse;
class DeleteEventTrackerRequest;
class DeleteEventTrackerResponse;
class DeleteFilterRequest;
class DeleteFilterResponse;
class DeleteRecommenderRequest;
class DeleteRecommenderResponse;
class DeleteSchemaRequest;
class DeleteSchemaResponse;
class DeleteSolutionRequest;
class DeleteSolutionResponse;
class DescribeAlgorithmRequest;
class DescribeAlgorithmResponse;
class DescribeBatchInferenceJobRequest;
class DescribeBatchInferenceJobResponse;
class DescribeBatchSegmentJobRequest;
class DescribeBatchSegmentJobResponse;
class DescribeCampaignRequest;
class DescribeCampaignResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeDatasetExportJobRequest;
class DescribeDatasetExportJobResponse;
class DescribeDatasetGroupRequest;
class DescribeDatasetGroupResponse;
class DescribeDatasetImportJobRequest;
class DescribeDatasetImportJobResponse;
class DescribeEventTrackerRequest;
class DescribeEventTrackerResponse;
class DescribeFeatureTransformationRequest;
class DescribeFeatureTransformationResponse;
class DescribeFilterRequest;
class DescribeFilterResponse;
class DescribeRecipeRequest;
class DescribeRecipeResponse;
class DescribeRecommenderRequest;
class DescribeRecommenderResponse;
class DescribeSchemaRequest;
class DescribeSchemaResponse;
class DescribeSolutionRequest;
class DescribeSolutionResponse;
class DescribeSolutionVersionRequest;
class DescribeSolutionVersionResponse;
class GetSolutionMetricsRequest;
class GetSolutionMetricsResponse;
class ListBatchInferenceJobsRequest;
class ListBatchInferenceJobsResponse;
class ListBatchSegmentJobsRequest;
class ListBatchSegmentJobsResponse;
class ListCampaignsRequest;
class ListCampaignsResponse;
class ListDatasetExportJobsRequest;
class ListDatasetExportJobsResponse;
class ListDatasetGroupsRequest;
class ListDatasetGroupsResponse;
class ListDatasetImportJobsRequest;
class ListDatasetImportJobsResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListEventTrackersRequest;
class ListEventTrackersResponse;
class ListFiltersRequest;
class ListFiltersResponse;
class ListRecipesRequest;
class ListRecipesResponse;
class ListRecommendersRequest;
class ListRecommendersResponse;
class ListSchemasRequest;
class ListSchemasResponse;
class ListSolutionVersionsRequest;
class ListSolutionVersionsResponse;
class ListSolutionsRequest;
class ListSolutionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartRecommenderRequest;
class StartRecommenderResponse;
class StopRecommenderRequest;
class StopRecommenderResponse;
class StopSolutionVersionCreationRequest;
class StopSolutionVersionCreationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCampaignRequest;
class UpdateCampaignResponse;
class UpdateRecommenderRequest;
class UpdateRecommenderResponse;

class QTAWSPERSONALIZE_EXPORT PersonalizeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PersonalizeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PersonalizeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBatchInferenceJobResponse * createBatchInferenceJob(const CreateBatchInferenceJobRequest &request);
    CreateBatchSegmentJobResponse * createBatchSegmentJob(const CreateBatchSegmentJobRequest &request);
    CreateCampaignResponse * createCampaign(const CreateCampaignRequest &request);
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateDatasetExportJobResponse * createDatasetExportJob(const CreateDatasetExportJobRequest &request);
    CreateDatasetGroupResponse * createDatasetGroup(const CreateDatasetGroupRequest &request);
    CreateDatasetImportJobResponse * createDatasetImportJob(const CreateDatasetImportJobRequest &request);
    CreateEventTrackerResponse * createEventTracker(const CreateEventTrackerRequest &request);
    CreateFilterResponse * createFilter(const CreateFilterRequest &request);
    CreateRecommenderResponse * createRecommender(const CreateRecommenderRequest &request);
    CreateSchemaResponse * createSchema(const CreateSchemaRequest &request);
    CreateSolutionResponse * createSolution(const CreateSolutionRequest &request);
    CreateSolutionVersionResponse * createSolutionVersion(const CreateSolutionVersionRequest &request);
    DeleteCampaignResponse * deleteCampaign(const DeleteCampaignRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteDatasetGroupResponse * deleteDatasetGroup(const DeleteDatasetGroupRequest &request);
    DeleteEventTrackerResponse * deleteEventTracker(const DeleteEventTrackerRequest &request);
    DeleteFilterResponse * deleteFilter(const DeleteFilterRequest &request);
    DeleteRecommenderResponse * deleteRecommender(const DeleteRecommenderRequest &request);
    DeleteSchemaResponse * deleteSchema(const DeleteSchemaRequest &request);
    DeleteSolutionResponse * deleteSolution(const DeleteSolutionRequest &request);
    DescribeAlgorithmResponse * describeAlgorithm(const DescribeAlgorithmRequest &request);
    DescribeBatchInferenceJobResponse * describeBatchInferenceJob(const DescribeBatchInferenceJobRequest &request);
    DescribeBatchSegmentJobResponse * describeBatchSegmentJob(const DescribeBatchSegmentJobRequest &request);
    DescribeCampaignResponse * describeCampaign(const DescribeCampaignRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeDatasetExportJobResponse * describeDatasetExportJob(const DescribeDatasetExportJobRequest &request);
    DescribeDatasetGroupResponse * describeDatasetGroup(const DescribeDatasetGroupRequest &request);
    DescribeDatasetImportJobResponse * describeDatasetImportJob(const DescribeDatasetImportJobRequest &request);
    DescribeEventTrackerResponse * describeEventTracker(const DescribeEventTrackerRequest &request);
    DescribeFeatureTransformationResponse * describeFeatureTransformation(const DescribeFeatureTransformationRequest &request);
    DescribeFilterResponse * describeFilter(const DescribeFilterRequest &request);
    DescribeRecipeResponse * describeRecipe(const DescribeRecipeRequest &request);
    DescribeRecommenderResponse * describeRecommender(const DescribeRecommenderRequest &request);
    DescribeSchemaResponse * describeSchema(const DescribeSchemaRequest &request);
    DescribeSolutionResponse * describeSolution(const DescribeSolutionRequest &request);
    DescribeSolutionVersionResponse * describeSolutionVersion(const DescribeSolutionVersionRequest &request);
    GetSolutionMetricsResponse * getSolutionMetrics(const GetSolutionMetricsRequest &request);
    ListBatchInferenceJobsResponse * listBatchInferenceJobs(const ListBatchInferenceJobsRequest &request);
    ListBatchSegmentJobsResponse * listBatchSegmentJobs(const ListBatchSegmentJobsRequest &request);
    ListCampaignsResponse * listCampaigns(const ListCampaignsRequest &request);
    ListDatasetExportJobsResponse * listDatasetExportJobs(const ListDatasetExportJobsRequest &request);
    ListDatasetGroupsResponse * listDatasetGroups(const ListDatasetGroupsRequest &request);
    ListDatasetImportJobsResponse * listDatasetImportJobs(const ListDatasetImportJobsRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListEventTrackersResponse * listEventTrackers(const ListEventTrackersRequest &request);
    ListFiltersResponse * listFilters(const ListFiltersRequest &request);
    ListRecipesResponse * listRecipes(const ListRecipesRequest &request);
    ListRecommendersResponse * listRecommenders(const ListRecommendersRequest &request);
    ListSchemasResponse * listSchemas(const ListSchemasRequest &request);
    ListSolutionVersionsResponse * listSolutionVersions(const ListSolutionVersionsRequest &request);
    ListSolutionsResponse * listSolutions(const ListSolutionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartRecommenderResponse * startRecommender(const StartRecommenderRequest &request);
    StopRecommenderResponse * stopRecommender(const StopRecommenderRequest &request);
    StopSolutionVersionCreationResponse * stopSolutionVersionCreation(const StopSolutionVersionCreationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCampaignResponse * updateCampaign(const UpdateCampaignRequest &request);
    UpdateRecommenderResponse * updateRecommender(const UpdateRecommenderRequest &request);

private:
    Q_DECLARE_PRIVATE(PersonalizeClient)
    Q_DISABLE_COPY(PersonalizeClient)

};

} // namespace Personalize
} // namespace QtAws

#endif
