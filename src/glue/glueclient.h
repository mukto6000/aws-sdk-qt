/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GLUECLIENT_H
#define QTAWS_GLUECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsglueglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Glue {

class GlueClientPrivate;
class BatchCreatePartitionRequest;
class BatchCreatePartitionResponse;
class BatchDeleteConnectionRequest;
class BatchDeleteConnectionResponse;
class BatchDeletePartitionRequest;
class BatchDeletePartitionResponse;
class BatchDeleteTableRequest;
class BatchDeleteTableResponse;
class BatchDeleteTableVersionRequest;
class BatchDeleteTableVersionResponse;
class BatchGetCrawlersRequest;
class BatchGetCrawlersResponse;
class BatchGetDevEndpointsRequest;
class BatchGetDevEndpointsResponse;
class BatchGetJobsRequest;
class BatchGetJobsResponse;
class BatchGetPartitionRequest;
class BatchGetPartitionResponse;
class BatchGetTriggersRequest;
class BatchGetTriggersResponse;
class BatchGetWorkflowsRequest;
class BatchGetWorkflowsResponse;
class BatchStopJobRunRequest;
class BatchStopJobRunResponse;
class BatchUpdatePartitionRequest;
class BatchUpdatePartitionResponse;
class CancelMLTaskRunRequest;
class CancelMLTaskRunResponse;
class CheckSchemaVersionValidityRequest;
class CheckSchemaVersionValidityResponse;
class CreateClassifierRequest;
class CreateClassifierResponse;
class CreateConnectionRequest;
class CreateConnectionResponse;
class CreateCrawlerRequest;
class CreateCrawlerResponse;
class CreateDatabaseRequest;
class CreateDatabaseResponse;
class CreateDevEndpointRequest;
class CreateDevEndpointResponse;
class CreateJobRequest;
class CreateJobResponse;
class CreateMLTransformRequest;
class CreateMLTransformResponse;
class CreatePartitionRequest;
class CreatePartitionResponse;
class CreatePartitionIndexRequest;
class CreatePartitionIndexResponse;
class CreateRegistryRequest;
class CreateRegistryResponse;
class CreateSchemaRequest;
class CreateSchemaResponse;
class CreateScriptRequest;
class CreateScriptResponse;
class CreateSecurityConfigurationRequest;
class CreateSecurityConfigurationResponse;
class CreateTableRequest;
class CreateTableResponse;
class CreateTriggerRequest;
class CreateTriggerResponse;
class CreateUserDefinedFunctionRequest;
class CreateUserDefinedFunctionResponse;
class CreateWorkflowRequest;
class CreateWorkflowResponse;
class DeleteClassifierRequest;
class DeleteClassifierResponse;
class DeleteColumnStatisticsForPartitionRequest;
class DeleteColumnStatisticsForPartitionResponse;
class DeleteColumnStatisticsForTableRequest;
class DeleteColumnStatisticsForTableResponse;
class DeleteConnectionRequest;
class DeleteConnectionResponse;
class DeleteCrawlerRequest;
class DeleteCrawlerResponse;
class DeleteDatabaseRequest;
class DeleteDatabaseResponse;
class DeleteDevEndpointRequest;
class DeleteDevEndpointResponse;
class DeleteJobRequest;
class DeleteJobResponse;
class DeleteMLTransformRequest;
class DeleteMLTransformResponse;
class DeletePartitionRequest;
class DeletePartitionResponse;
class DeletePartitionIndexRequest;
class DeletePartitionIndexResponse;
class DeleteRegistryRequest;
class DeleteRegistryResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteSchemaRequest;
class DeleteSchemaResponse;
class DeleteSchemaVersionsRequest;
class DeleteSchemaVersionsResponse;
class DeleteSecurityConfigurationRequest;
class DeleteSecurityConfigurationResponse;
class DeleteTableRequest;
class DeleteTableResponse;
class DeleteTableVersionRequest;
class DeleteTableVersionResponse;
class DeleteTriggerRequest;
class DeleteTriggerResponse;
class DeleteUserDefinedFunctionRequest;
class DeleteUserDefinedFunctionResponse;
class DeleteWorkflowRequest;
class DeleteWorkflowResponse;
class GetCatalogImportStatusRequest;
class GetCatalogImportStatusResponse;
class GetClassifierRequest;
class GetClassifierResponse;
class GetClassifiersRequest;
class GetClassifiersResponse;
class GetColumnStatisticsForPartitionRequest;
class GetColumnStatisticsForPartitionResponse;
class GetColumnStatisticsForTableRequest;
class GetColumnStatisticsForTableResponse;
class GetConnectionRequest;
class GetConnectionResponse;
class GetConnectionsRequest;
class GetConnectionsResponse;
class GetCrawlerRequest;
class GetCrawlerResponse;
class GetCrawlerMetricsRequest;
class GetCrawlerMetricsResponse;
class GetCrawlersRequest;
class GetCrawlersResponse;
class GetDataCatalogEncryptionSettingsRequest;
class GetDataCatalogEncryptionSettingsResponse;
class GetDatabaseRequest;
class GetDatabaseResponse;
class GetDatabasesRequest;
class GetDatabasesResponse;
class GetDataflowGraphRequest;
class GetDataflowGraphResponse;
class GetDevEndpointRequest;
class GetDevEndpointResponse;
class GetDevEndpointsRequest;
class GetDevEndpointsResponse;
class GetJobRequest;
class GetJobResponse;
class GetJobBookmarkRequest;
class GetJobBookmarkResponse;
class GetJobRunRequest;
class GetJobRunResponse;
class GetJobRunsRequest;
class GetJobRunsResponse;
class GetJobsRequest;
class GetJobsResponse;
class GetMLTaskRunRequest;
class GetMLTaskRunResponse;
class GetMLTaskRunsRequest;
class GetMLTaskRunsResponse;
class GetMLTransformRequest;
class GetMLTransformResponse;
class GetMLTransformsRequest;
class GetMLTransformsResponse;
class GetMappingRequest;
class GetMappingResponse;
class GetPartitionRequest;
class GetPartitionResponse;
class GetPartitionIndexesRequest;
class GetPartitionIndexesResponse;
class GetPartitionsRequest;
class GetPartitionsResponse;
class GetPlanRequest;
class GetPlanResponse;
class GetRegistryRequest;
class GetRegistryResponse;
class GetResourcePoliciesRequest;
class GetResourcePoliciesResponse;
class GetResourcePolicyRequest;
class GetResourcePolicyResponse;
class GetSchemaRequest;
class GetSchemaResponse;
class GetSchemaByDefinitionRequest;
class GetSchemaByDefinitionResponse;
class GetSchemaVersionRequest;
class GetSchemaVersionResponse;
class GetSchemaVersionsDiffRequest;
class GetSchemaVersionsDiffResponse;
class GetSecurityConfigurationRequest;
class GetSecurityConfigurationResponse;
class GetSecurityConfigurationsRequest;
class GetSecurityConfigurationsResponse;
class GetTableRequest;
class GetTableResponse;
class GetTableVersionRequest;
class GetTableVersionResponse;
class GetTableVersionsRequest;
class GetTableVersionsResponse;
class GetTablesRequest;
class GetTablesResponse;
class GetTagsRequest;
class GetTagsResponse;
class GetTriggerRequest;
class GetTriggerResponse;
class GetTriggersRequest;
class GetTriggersResponse;
class GetUserDefinedFunctionRequest;
class GetUserDefinedFunctionResponse;
class GetUserDefinedFunctionsRequest;
class GetUserDefinedFunctionsResponse;
class GetWorkflowRequest;
class GetWorkflowResponse;
class GetWorkflowRunRequest;
class GetWorkflowRunResponse;
class GetWorkflowRunPropertiesRequest;
class GetWorkflowRunPropertiesResponse;
class GetWorkflowRunsRequest;
class GetWorkflowRunsResponse;
class ImportCatalogToGlueRequest;
class ImportCatalogToGlueResponse;
class ListCrawlersRequest;
class ListCrawlersResponse;
class ListDevEndpointsRequest;
class ListDevEndpointsResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListMLTransformsRequest;
class ListMLTransformsResponse;
class ListRegistriesRequest;
class ListRegistriesResponse;
class ListSchemaVersionsRequest;
class ListSchemaVersionsResponse;
class ListSchemasRequest;
class ListSchemasResponse;
class ListTriggersRequest;
class ListTriggersResponse;
class ListWorkflowsRequest;
class ListWorkflowsResponse;
class PutDataCatalogEncryptionSettingsRequest;
class PutDataCatalogEncryptionSettingsResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class PutSchemaVersionMetadataRequest;
class PutSchemaVersionMetadataResponse;
class PutWorkflowRunPropertiesRequest;
class PutWorkflowRunPropertiesResponse;
class QuerySchemaVersionMetadataRequest;
class QuerySchemaVersionMetadataResponse;
class RegisterSchemaVersionRequest;
class RegisterSchemaVersionResponse;
class RemoveSchemaVersionMetadataRequest;
class RemoveSchemaVersionMetadataResponse;
class ResetJobBookmarkRequest;
class ResetJobBookmarkResponse;
class ResumeWorkflowRunRequest;
class ResumeWorkflowRunResponse;
class SearchTablesRequest;
class SearchTablesResponse;
class StartCrawlerRequest;
class StartCrawlerResponse;
class StartCrawlerScheduleRequest;
class StartCrawlerScheduleResponse;
class StartExportLabelsTaskRunRequest;
class StartExportLabelsTaskRunResponse;
class StartImportLabelsTaskRunRequest;
class StartImportLabelsTaskRunResponse;
class StartJobRunRequest;
class StartJobRunResponse;
class StartMLEvaluationTaskRunRequest;
class StartMLEvaluationTaskRunResponse;
class StartMLLabelingSetGenerationTaskRunRequest;
class StartMLLabelingSetGenerationTaskRunResponse;
class StartTriggerRequest;
class StartTriggerResponse;
class StartWorkflowRunRequest;
class StartWorkflowRunResponse;
class StopCrawlerRequest;
class StopCrawlerResponse;
class StopCrawlerScheduleRequest;
class StopCrawlerScheduleResponse;
class StopTriggerRequest;
class StopTriggerResponse;
class StopWorkflowRunRequest;
class StopWorkflowRunResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateClassifierRequest;
class UpdateClassifierResponse;
class UpdateColumnStatisticsForPartitionRequest;
class UpdateColumnStatisticsForPartitionResponse;
class UpdateColumnStatisticsForTableRequest;
class UpdateColumnStatisticsForTableResponse;
class UpdateConnectionRequest;
class UpdateConnectionResponse;
class UpdateCrawlerRequest;
class UpdateCrawlerResponse;
class UpdateCrawlerScheduleRequest;
class UpdateCrawlerScheduleResponse;
class UpdateDatabaseRequest;
class UpdateDatabaseResponse;
class UpdateDevEndpointRequest;
class UpdateDevEndpointResponse;
class UpdateJobRequest;
class UpdateJobResponse;
class UpdateMLTransformRequest;
class UpdateMLTransformResponse;
class UpdatePartitionRequest;
class UpdatePartitionResponse;
class UpdateRegistryRequest;
class UpdateRegistryResponse;
class UpdateSchemaRequest;
class UpdateSchemaResponse;
class UpdateTableRequest;
class UpdateTableResponse;
class UpdateTriggerRequest;
class UpdateTriggerResponse;
class UpdateUserDefinedFunctionRequest;
class UpdateUserDefinedFunctionResponse;
class UpdateWorkflowRequest;
class UpdateWorkflowResponse;

class QTAWSGLUE_EXPORT GlueClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GlueClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GlueClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCreatePartitionResponse * batchCreatePartition(const BatchCreatePartitionRequest &request);
    BatchDeleteConnectionResponse * batchDeleteConnection(const BatchDeleteConnectionRequest &request);
    BatchDeletePartitionResponse * batchDeletePartition(const BatchDeletePartitionRequest &request);
    BatchDeleteTableResponse * batchDeleteTable(const BatchDeleteTableRequest &request);
    BatchDeleteTableVersionResponse * batchDeleteTableVersion(const BatchDeleteTableVersionRequest &request);
    BatchGetCrawlersResponse * batchGetCrawlers(const BatchGetCrawlersRequest &request);
    BatchGetDevEndpointsResponse * batchGetDevEndpoints(const BatchGetDevEndpointsRequest &request);
    BatchGetJobsResponse * batchGetJobs(const BatchGetJobsRequest &request);
    BatchGetPartitionResponse * batchGetPartition(const BatchGetPartitionRequest &request);
    BatchGetTriggersResponse * batchGetTriggers(const BatchGetTriggersRequest &request);
    BatchGetWorkflowsResponse * batchGetWorkflows(const BatchGetWorkflowsRequest &request);
    BatchStopJobRunResponse * batchStopJobRun(const BatchStopJobRunRequest &request);
    BatchUpdatePartitionResponse * batchUpdatePartition(const BatchUpdatePartitionRequest &request);
    CancelMLTaskRunResponse * cancelMLTaskRun(const CancelMLTaskRunRequest &request);
    CheckSchemaVersionValidityResponse * checkSchemaVersionValidity(const CheckSchemaVersionValidityRequest &request);
    CreateClassifierResponse * createClassifier(const CreateClassifierRequest &request);
    CreateConnectionResponse * createConnection(const CreateConnectionRequest &request);
    CreateCrawlerResponse * createCrawler(const CreateCrawlerRequest &request);
    CreateDatabaseResponse * createDatabase(const CreateDatabaseRequest &request);
    CreateDevEndpointResponse * createDevEndpoint(const CreateDevEndpointRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreateMLTransformResponse * createMLTransform(const CreateMLTransformRequest &request);
    CreatePartitionResponse * createPartition(const CreatePartitionRequest &request);
    CreatePartitionIndexResponse * createPartitionIndex(const CreatePartitionIndexRequest &request);
    CreateRegistryResponse * createRegistry(const CreateRegistryRequest &request);
    CreateSchemaResponse * createSchema(const CreateSchemaRequest &request);
    CreateScriptResponse * createScript(const CreateScriptRequest &request);
    CreateSecurityConfigurationResponse * createSecurityConfiguration(const CreateSecurityConfigurationRequest &request);
    CreateTableResponse * createTable(const CreateTableRequest &request);
    CreateTriggerResponse * createTrigger(const CreateTriggerRequest &request);
    CreateUserDefinedFunctionResponse * createUserDefinedFunction(const CreateUserDefinedFunctionRequest &request);
    CreateWorkflowResponse * createWorkflow(const CreateWorkflowRequest &request);
    DeleteClassifierResponse * deleteClassifier(const DeleteClassifierRequest &request);
    DeleteColumnStatisticsForPartitionResponse * deleteColumnStatisticsForPartition(const DeleteColumnStatisticsForPartitionRequest &request);
    DeleteColumnStatisticsForTableResponse * deleteColumnStatisticsForTable(const DeleteColumnStatisticsForTableRequest &request);
    DeleteConnectionResponse * deleteConnection(const DeleteConnectionRequest &request);
    DeleteCrawlerResponse * deleteCrawler(const DeleteCrawlerRequest &request);
    DeleteDatabaseResponse * deleteDatabase(const DeleteDatabaseRequest &request);
    DeleteDevEndpointResponse * deleteDevEndpoint(const DeleteDevEndpointRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    DeleteMLTransformResponse * deleteMLTransform(const DeleteMLTransformRequest &request);
    DeletePartitionResponse * deletePartition(const DeletePartitionRequest &request);
    DeletePartitionIndexResponse * deletePartitionIndex(const DeletePartitionIndexRequest &request);
    DeleteRegistryResponse * deleteRegistry(const DeleteRegistryRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteSchemaResponse * deleteSchema(const DeleteSchemaRequest &request);
    DeleteSchemaVersionsResponse * deleteSchemaVersions(const DeleteSchemaVersionsRequest &request);
    DeleteSecurityConfigurationResponse * deleteSecurityConfiguration(const DeleteSecurityConfigurationRequest &request);
    DeleteTableResponse * deleteTable(const DeleteTableRequest &request);
    DeleteTableVersionResponse * deleteTableVersion(const DeleteTableVersionRequest &request);
    DeleteTriggerResponse * deleteTrigger(const DeleteTriggerRequest &request);
    DeleteUserDefinedFunctionResponse * deleteUserDefinedFunction(const DeleteUserDefinedFunctionRequest &request);
    DeleteWorkflowResponse * deleteWorkflow(const DeleteWorkflowRequest &request);
    GetCatalogImportStatusResponse * getCatalogImportStatus(const GetCatalogImportStatusRequest &request);
    GetClassifierResponse * getClassifier(const GetClassifierRequest &request);
    GetClassifiersResponse * getClassifiers(const GetClassifiersRequest &request);
    GetColumnStatisticsForPartitionResponse * getColumnStatisticsForPartition(const GetColumnStatisticsForPartitionRequest &request);
    GetColumnStatisticsForTableResponse * getColumnStatisticsForTable(const GetColumnStatisticsForTableRequest &request);
    GetConnectionResponse * getConnection(const GetConnectionRequest &request);
    GetConnectionsResponse * getConnections(const GetConnectionsRequest &request);
    GetCrawlerResponse * getCrawler(const GetCrawlerRequest &request);
    GetCrawlerMetricsResponse * getCrawlerMetrics(const GetCrawlerMetricsRequest &request);
    GetCrawlersResponse * getCrawlers(const GetCrawlersRequest &request);
    GetDataCatalogEncryptionSettingsResponse * getDataCatalogEncryptionSettings(const GetDataCatalogEncryptionSettingsRequest &request);
    GetDatabaseResponse * getDatabase(const GetDatabaseRequest &request);
    GetDatabasesResponse * getDatabases(const GetDatabasesRequest &request);
    GetDataflowGraphResponse * getDataflowGraph(const GetDataflowGraphRequest &request);
    GetDevEndpointResponse * getDevEndpoint(const GetDevEndpointRequest &request);
    GetDevEndpointsResponse * getDevEndpoints(const GetDevEndpointsRequest &request);
    GetJobResponse * getJob(const GetJobRequest &request);
    GetJobBookmarkResponse * getJobBookmark(const GetJobBookmarkRequest &request);
    GetJobRunResponse * getJobRun(const GetJobRunRequest &request);
    GetJobRunsResponse * getJobRuns(const GetJobRunsRequest &request);
    GetJobsResponse * getJobs(const GetJobsRequest &request);
    GetMLTaskRunResponse * getMLTaskRun(const GetMLTaskRunRequest &request);
    GetMLTaskRunsResponse * getMLTaskRuns(const GetMLTaskRunsRequest &request);
    GetMLTransformResponse * getMLTransform(const GetMLTransformRequest &request);
    GetMLTransformsResponse * getMLTransforms(const GetMLTransformsRequest &request);
    GetMappingResponse * getMapping(const GetMappingRequest &request);
    GetPartitionResponse * getPartition(const GetPartitionRequest &request);
    GetPartitionIndexesResponse * getPartitionIndexes(const GetPartitionIndexesRequest &request);
    GetPartitionsResponse * getPartitions(const GetPartitionsRequest &request);
    GetPlanResponse * getPlan(const GetPlanRequest &request);
    GetRegistryResponse * getRegistry(const GetRegistryRequest &request);
    GetResourcePoliciesResponse * getResourcePolicies(const GetResourcePoliciesRequest &request);
    GetResourcePolicyResponse * getResourcePolicy(const GetResourcePolicyRequest &request);
    GetSchemaResponse * getSchema(const GetSchemaRequest &request);
    GetSchemaByDefinitionResponse * getSchemaByDefinition(const GetSchemaByDefinitionRequest &request);
    GetSchemaVersionResponse * getSchemaVersion(const GetSchemaVersionRequest &request);
    GetSchemaVersionsDiffResponse * getSchemaVersionsDiff(const GetSchemaVersionsDiffRequest &request);
    GetSecurityConfigurationResponse * getSecurityConfiguration(const GetSecurityConfigurationRequest &request);
    GetSecurityConfigurationsResponse * getSecurityConfigurations(const GetSecurityConfigurationsRequest &request);
    GetTableResponse * getTable(const GetTableRequest &request);
    GetTableVersionResponse * getTableVersion(const GetTableVersionRequest &request);
    GetTableVersionsResponse * getTableVersions(const GetTableVersionsRequest &request);
    GetTablesResponse * getTables(const GetTablesRequest &request);
    GetTagsResponse * getTags(const GetTagsRequest &request);
    GetTriggerResponse * getTrigger(const GetTriggerRequest &request);
    GetTriggersResponse * getTriggers(const GetTriggersRequest &request);
    GetUserDefinedFunctionResponse * getUserDefinedFunction(const GetUserDefinedFunctionRequest &request);
    GetUserDefinedFunctionsResponse * getUserDefinedFunctions(const GetUserDefinedFunctionsRequest &request);
    GetWorkflowResponse * getWorkflow(const GetWorkflowRequest &request);
    GetWorkflowRunResponse * getWorkflowRun(const GetWorkflowRunRequest &request);
    GetWorkflowRunPropertiesResponse * getWorkflowRunProperties(const GetWorkflowRunPropertiesRequest &request);
    GetWorkflowRunsResponse * getWorkflowRuns(const GetWorkflowRunsRequest &request);
    ImportCatalogToGlueResponse * importCatalogToGlue(const ImportCatalogToGlueRequest &request);
    ListCrawlersResponse * listCrawlers(const ListCrawlersRequest &request);
    ListDevEndpointsResponse * listDevEndpoints(const ListDevEndpointsRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListMLTransformsResponse * listMLTransforms(const ListMLTransformsRequest &request);
    ListRegistriesResponse * listRegistries(const ListRegistriesRequest &request);
    ListSchemaVersionsResponse * listSchemaVersions(const ListSchemaVersionsRequest &request);
    ListSchemasResponse * listSchemas(const ListSchemasRequest &request);
    ListTriggersResponse * listTriggers(const ListTriggersRequest &request);
    ListWorkflowsResponse * listWorkflows(const ListWorkflowsRequest &request);
    PutDataCatalogEncryptionSettingsResponse * putDataCatalogEncryptionSettings(const PutDataCatalogEncryptionSettingsRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    PutSchemaVersionMetadataResponse * putSchemaVersionMetadata(const PutSchemaVersionMetadataRequest &request);
    PutWorkflowRunPropertiesResponse * putWorkflowRunProperties(const PutWorkflowRunPropertiesRequest &request);
    QuerySchemaVersionMetadataResponse * querySchemaVersionMetadata(const QuerySchemaVersionMetadataRequest &request);
    RegisterSchemaVersionResponse * registerSchemaVersion(const RegisterSchemaVersionRequest &request);
    RemoveSchemaVersionMetadataResponse * removeSchemaVersionMetadata(const RemoveSchemaVersionMetadataRequest &request);
    ResetJobBookmarkResponse * resetJobBookmark(const ResetJobBookmarkRequest &request);
    ResumeWorkflowRunResponse * resumeWorkflowRun(const ResumeWorkflowRunRequest &request);
    SearchTablesResponse * searchTables(const SearchTablesRequest &request);
    StartCrawlerResponse * startCrawler(const StartCrawlerRequest &request);
    StartCrawlerScheduleResponse * startCrawlerSchedule(const StartCrawlerScheduleRequest &request);
    StartExportLabelsTaskRunResponse * startExportLabelsTaskRun(const StartExportLabelsTaskRunRequest &request);
    StartImportLabelsTaskRunResponse * startImportLabelsTaskRun(const StartImportLabelsTaskRunRequest &request);
    StartJobRunResponse * startJobRun(const StartJobRunRequest &request);
    StartMLEvaluationTaskRunResponse * startMLEvaluationTaskRun(const StartMLEvaluationTaskRunRequest &request);
    StartMLLabelingSetGenerationTaskRunResponse * startMLLabelingSetGenerationTaskRun(const StartMLLabelingSetGenerationTaskRunRequest &request);
    StartTriggerResponse * startTrigger(const StartTriggerRequest &request);
    StartWorkflowRunResponse * startWorkflowRun(const StartWorkflowRunRequest &request);
    StopCrawlerResponse * stopCrawler(const StopCrawlerRequest &request);
    StopCrawlerScheduleResponse * stopCrawlerSchedule(const StopCrawlerScheduleRequest &request);
    StopTriggerResponse * stopTrigger(const StopTriggerRequest &request);
    StopWorkflowRunResponse * stopWorkflowRun(const StopWorkflowRunRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateClassifierResponse * updateClassifier(const UpdateClassifierRequest &request);
    UpdateColumnStatisticsForPartitionResponse * updateColumnStatisticsForPartition(const UpdateColumnStatisticsForPartitionRequest &request);
    UpdateColumnStatisticsForTableResponse * updateColumnStatisticsForTable(const UpdateColumnStatisticsForTableRequest &request);
    UpdateConnectionResponse * updateConnection(const UpdateConnectionRequest &request);
    UpdateCrawlerResponse * updateCrawler(const UpdateCrawlerRequest &request);
    UpdateCrawlerScheduleResponse * updateCrawlerSchedule(const UpdateCrawlerScheduleRequest &request);
    UpdateDatabaseResponse * updateDatabase(const UpdateDatabaseRequest &request);
    UpdateDevEndpointResponse * updateDevEndpoint(const UpdateDevEndpointRequest &request);
    UpdateJobResponse * updateJob(const UpdateJobRequest &request);
    UpdateMLTransformResponse * updateMLTransform(const UpdateMLTransformRequest &request);
    UpdatePartitionResponse * updatePartition(const UpdatePartitionRequest &request);
    UpdateRegistryResponse * updateRegistry(const UpdateRegistryRequest &request);
    UpdateSchemaResponse * updateSchema(const UpdateSchemaRequest &request);
    UpdateTableResponse * updateTable(const UpdateTableRequest &request);
    UpdateTriggerResponse * updateTrigger(const UpdateTriggerRequest &request);
    UpdateUserDefinedFunctionResponse * updateUserDefinedFunction(const UpdateUserDefinedFunctionRequest &request);
    UpdateWorkflowResponse * updateWorkflow(const UpdateWorkflowRequest &request);

protected:
    /// @cond internal
    GlueClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit GlueClient(GlueClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(GlueClient)
    Q_DISABLE_COPY(GlueClient)

};

} // namespace Glue
} // namespace QtAws

#endif
