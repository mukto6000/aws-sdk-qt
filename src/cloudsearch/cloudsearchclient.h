// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHCLIENT_H
#define QTAWS_CLOUDSEARCHCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudsearchglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CloudSearch {

class CloudSearchClientPrivate;
class BuildSuggestersRequest;
class BuildSuggestersResponse;
class CreateDomainRequest;
class CreateDomainResponse;
class DefineAnalysisSchemeRequest;
class DefineAnalysisSchemeResponse;
class DefineExpressionRequest;
class DefineExpressionResponse;
class DefineIndexFieldRequest;
class DefineIndexFieldResponse;
class DefineSuggesterRequest;
class DefineSuggesterResponse;
class DeleteAnalysisSchemeRequest;
class DeleteAnalysisSchemeResponse;
class DeleteDomainRequest;
class DeleteDomainResponse;
class DeleteExpressionRequest;
class DeleteExpressionResponse;
class DeleteIndexFieldRequest;
class DeleteIndexFieldResponse;
class DeleteSuggesterRequest;
class DeleteSuggesterResponse;
class DescribeAnalysisSchemesRequest;
class DescribeAnalysisSchemesResponse;
class DescribeAvailabilityOptionsRequest;
class DescribeAvailabilityOptionsResponse;
class DescribeDomainEndpointOptionsRequest;
class DescribeDomainEndpointOptionsResponse;
class DescribeDomainsRequest;
class DescribeDomainsResponse;
class DescribeExpressionsRequest;
class DescribeExpressionsResponse;
class DescribeIndexFieldsRequest;
class DescribeIndexFieldsResponse;
class DescribeScalingParametersRequest;
class DescribeScalingParametersResponse;
class DescribeServiceAccessPoliciesRequest;
class DescribeServiceAccessPoliciesResponse;
class DescribeSuggestersRequest;
class DescribeSuggestersResponse;
class IndexDocumentsRequest;
class IndexDocumentsResponse;
class ListDomainNamesRequest;
class ListDomainNamesResponse;
class UpdateAvailabilityOptionsRequest;
class UpdateAvailabilityOptionsResponse;
class UpdateDomainEndpointOptionsRequest;
class UpdateDomainEndpointOptionsResponse;
class UpdateScalingParametersRequest;
class UpdateScalingParametersResponse;
class UpdateServiceAccessPoliciesRequest;
class UpdateServiceAccessPoliciesResponse;

class QTAWSCLOUDSEARCH_EXPORT CloudSearchClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudSearchClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudSearchClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BuildSuggestersResponse * buildSuggesters(const BuildSuggestersRequest &request);
    CreateDomainResponse * createDomain(const CreateDomainRequest &request);
    DefineAnalysisSchemeResponse * defineAnalysisScheme(const DefineAnalysisSchemeRequest &request);
    DefineExpressionResponse * defineExpression(const DefineExpressionRequest &request);
    DefineIndexFieldResponse * defineIndexField(const DefineIndexFieldRequest &request);
    DefineSuggesterResponse * defineSuggester(const DefineSuggesterRequest &request);
    DeleteAnalysisSchemeResponse * deleteAnalysisScheme(const DeleteAnalysisSchemeRequest &request);
    DeleteDomainResponse * deleteDomain(const DeleteDomainRequest &request);
    DeleteExpressionResponse * deleteExpression(const DeleteExpressionRequest &request);
    DeleteIndexFieldResponse * deleteIndexField(const DeleteIndexFieldRequest &request);
    DeleteSuggesterResponse * deleteSuggester(const DeleteSuggesterRequest &request);
    DescribeAnalysisSchemesResponse * describeAnalysisSchemes(const DescribeAnalysisSchemesRequest &request);
    DescribeAvailabilityOptionsResponse * describeAvailabilityOptions(const DescribeAvailabilityOptionsRequest &request);
    DescribeDomainEndpointOptionsResponse * describeDomainEndpointOptions(const DescribeDomainEndpointOptionsRequest &request);
    DescribeDomainsResponse * describeDomains(const DescribeDomainsRequest &request);
    DescribeExpressionsResponse * describeExpressions(const DescribeExpressionsRequest &request);
    DescribeIndexFieldsResponse * describeIndexFields(const DescribeIndexFieldsRequest &request);
    DescribeScalingParametersResponse * describeScalingParameters(const DescribeScalingParametersRequest &request);
    DescribeServiceAccessPoliciesResponse * describeServiceAccessPolicies(const DescribeServiceAccessPoliciesRequest &request);
    DescribeSuggestersResponse * describeSuggesters(const DescribeSuggestersRequest &request);
    IndexDocumentsResponse * indexDocuments(const IndexDocumentsRequest &request);
    ListDomainNamesResponse * listDomainNames(const ListDomainNamesRequest &request);
    ListDomainNamesResponse * listDomainNames();
    UpdateAvailabilityOptionsResponse * updateAvailabilityOptions(const UpdateAvailabilityOptionsRequest &request);
    UpdateDomainEndpointOptionsResponse * updateDomainEndpointOptions(const UpdateDomainEndpointOptionsRequest &request);
    UpdateScalingParametersResponse * updateScalingParameters(const UpdateScalingParametersRequest &request);
    UpdateServiceAccessPoliciesResponse * updateServiceAccessPolicies(const UpdateServiceAccessPoliciesRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudSearchClient)
    Q_DISABLE_COPY(CloudSearchClient)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
