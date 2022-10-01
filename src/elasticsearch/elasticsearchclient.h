// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICSEARCHCLIENT_H
#define QTAWS_ELASTICSEARCHCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawselasticsearchglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Elasticsearch {

class ElasticsearchClientPrivate;
class AcceptInboundCrossClusterSearchConnectionRequest;
class AcceptInboundCrossClusterSearchConnectionResponse;
class AddTagsRequest;
class AddTagsResponse;
class AssociatePackageRequest;
class AssociatePackageResponse;
class CancelElasticsearchServiceSoftwareUpdateRequest;
class CancelElasticsearchServiceSoftwareUpdateResponse;
class CreateElasticsearchDomainRequest;
class CreateElasticsearchDomainResponse;
class CreateOutboundCrossClusterSearchConnectionRequest;
class CreateOutboundCrossClusterSearchConnectionResponse;
class CreatePackageRequest;
class CreatePackageResponse;
class DeleteElasticsearchDomainRequest;
class DeleteElasticsearchDomainResponse;
class DeleteElasticsearchServiceRoleRequest;
class DeleteElasticsearchServiceRoleResponse;
class DeleteInboundCrossClusterSearchConnectionRequest;
class DeleteInboundCrossClusterSearchConnectionResponse;
class DeleteOutboundCrossClusterSearchConnectionRequest;
class DeleteOutboundCrossClusterSearchConnectionResponse;
class DeletePackageRequest;
class DeletePackageResponse;
class DescribeDomainAutoTunesRequest;
class DescribeDomainAutoTunesResponse;
class DescribeDomainChangeProgressRequest;
class DescribeDomainChangeProgressResponse;
class DescribeElasticsearchDomainRequest;
class DescribeElasticsearchDomainResponse;
class DescribeElasticsearchDomainConfigRequest;
class DescribeElasticsearchDomainConfigResponse;
class DescribeElasticsearchDomainsRequest;
class DescribeElasticsearchDomainsResponse;
class DescribeElasticsearchInstanceTypeLimitsRequest;
class DescribeElasticsearchInstanceTypeLimitsResponse;
class DescribeInboundCrossClusterSearchConnectionsRequest;
class DescribeInboundCrossClusterSearchConnectionsResponse;
class DescribeOutboundCrossClusterSearchConnectionsRequest;
class DescribeOutboundCrossClusterSearchConnectionsResponse;
class DescribePackagesRequest;
class DescribePackagesResponse;
class DescribeReservedElasticsearchInstanceOfferingsRequest;
class DescribeReservedElasticsearchInstanceOfferingsResponse;
class DescribeReservedElasticsearchInstancesRequest;
class DescribeReservedElasticsearchInstancesResponse;
class DissociatePackageRequest;
class DissociatePackageResponse;
class GetCompatibleElasticsearchVersionsRequest;
class GetCompatibleElasticsearchVersionsResponse;
class GetPackageVersionHistoryRequest;
class GetPackageVersionHistoryResponse;
class GetUpgradeHistoryRequest;
class GetUpgradeHistoryResponse;
class GetUpgradeStatusRequest;
class GetUpgradeStatusResponse;
class ListDomainNamesRequest;
class ListDomainNamesResponse;
class ListDomainsForPackageRequest;
class ListDomainsForPackageResponse;
class ListElasticsearchInstanceTypesRequest;
class ListElasticsearchInstanceTypesResponse;
class ListElasticsearchVersionsRequest;
class ListElasticsearchVersionsResponse;
class ListPackagesForDomainRequest;
class ListPackagesForDomainResponse;
class ListTagsRequest;
class ListTagsResponse;
class PurchaseReservedElasticsearchInstanceOfferingRequest;
class PurchaseReservedElasticsearchInstanceOfferingResponse;
class RejectInboundCrossClusterSearchConnectionRequest;
class RejectInboundCrossClusterSearchConnectionResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class StartElasticsearchServiceSoftwareUpdateRequest;
class StartElasticsearchServiceSoftwareUpdateResponse;
class UpdateElasticsearchDomainConfigRequest;
class UpdateElasticsearchDomainConfigResponse;
class UpdatePackageRequest;
class UpdatePackageResponse;
class UpgradeElasticsearchDomainRequest;
class UpgradeElasticsearchDomainResponse;

class QTAWSELASTICSEARCH_EXPORT ElasticsearchClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ElasticsearchClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ElasticsearchClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptInboundCrossClusterSearchConnectionResponse * acceptInboundCrossClusterSearchConnection(const AcceptInboundCrossClusterSearchConnectionRequest &request);
    AddTagsResponse * addTags(const AddTagsRequest &request);
    AssociatePackageResponse * associatePackage(const AssociatePackageRequest &request);
    CancelElasticsearchServiceSoftwareUpdateResponse * cancelElasticsearchServiceSoftwareUpdate(const CancelElasticsearchServiceSoftwareUpdateRequest &request);
    CreateElasticsearchDomainResponse * createElasticsearchDomain(const CreateElasticsearchDomainRequest &request);
    CreateOutboundCrossClusterSearchConnectionResponse * createOutboundCrossClusterSearchConnection(const CreateOutboundCrossClusterSearchConnectionRequest &request);
    CreatePackageResponse * createPackage(const CreatePackageRequest &request);
    DeleteElasticsearchDomainResponse * deleteElasticsearchDomain(const DeleteElasticsearchDomainRequest &request);
    DeleteElasticsearchServiceRoleResponse * deleteElasticsearchServiceRole(const DeleteElasticsearchServiceRoleRequest &request);
    DeleteInboundCrossClusterSearchConnectionResponse * deleteInboundCrossClusterSearchConnection(const DeleteInboundCrossClusterSearchConnectionRequest &request);
    DeleteOutboundCrossClusterSearchConnectionResponse * deleteOutboundCrossClusterSearchConnection(const DeleteOutboundCrossClusterSearchConnectionRequest &request);
    DeletePackageResponse * deletePackage(const DeletePackageRequest &request);
    DescribeDomainAutoTunesResponse * describeDomainAutoTunes(const DescribeDomainAutoTunesRequest &request);
    DescribeDomainChangeProgressResponse * describeDomainChangeProgress(const DescribeDomainChangeProgressRequest &request);
    DescribeElasticsearchDomainResponse * describeElasticsearchDomain(const DescribeElasticsearchDomainRequest &request);
    DescribeElasticsearchDomainConfigResponse * describeElasticsearchDomainConfig(const DescribeElasticsearchDomainConfigRequest &request);
    DescribeElasticsearchDomainsResponse * describeElasticsearchDomains(const DescribeElasticsearchDomainsRequest &request);
    DescribeElasticsearchInstanceTypeLimitsResponse * describeElasticsearchInstanceTypeLimits(const DescribeElasticsearchInstanceTypeLimitsRequest &request);
    DescribeInboundCrossClusterSearchConnectionsResponse * describeInboundCrossClusterSearchConnections(const DescribeInboundCrossClusterSearchConnectionsRequest &request);
    DescribeOutboundCrossClusterSearchConnectionsResponse * describeOutboundCrossClusterSearchConnections(const DescribeOutboundCrossClusterSearchConnectionsRequest &request);
    DescribePackagesResponse * describePackages(const DescribePackagesRequest &request);
    DescribeReservedElasticsearchInstanceOfferingsResponse * describeReservedElasticsearchInstanceOfferings(const DescribeReservedElasticsearchInstanceOfferingsRequest &request);
    DescribeReservedElasticsearchInstancesResponse * describeReservedElasticsearchInstances(const DescribeReservedElasticsearchInstancesRequest &request);
    DissociatePackageResponse * dissociatePackage(const DissociatePackageRequest &request);
    GetCompatibleElasticsearchVersionsResponse * getCompatibleElasticsearchVersions(const GetCompatibleElasticsearchVersionsRequest &request);
    GetPackageVersionHistoryResponse * getPackageVersionHistory(const GetPackageVersionHistoryRequest &request);
    GetUpgradeHistoryResponse * getUpgradeHistory(const GetUpgradeHistoryRequest &request);
    GetUpgradeStatusResponse * getUpgradeStatus(const GetUpgradeStatusRequest &request);
    ListDomainNamesResponse * listDomainNames(const ListDomainNamesRequest &request);
    ListDomainsForPackageResponse * listDomainsForPackage(const ListDomainsForPackageRequest &request);
    ListElasticsearchInstanceTypesResponse * listElasticsearchInstanceTypes(const ListElasticsearchInstanceTypesRequest &request);
    ListElasticsearchVersionsResponse * listElasticsearchVersions(const ListElasticsearchVersionsRequest &request);
    ListPackagesForDomainResponse * listPackagesForDomain(const ListPackagesForDomainRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    PurchaseReservedElasticsearchInstanceOfferingResponse * purchaseReservedElasticsearchInstanceOffering(const PurchaseReservedElasticsearchInstanceOfferingRequest &request);
    RejectInboundCrossClusterSearchConnectionResponse * rejectInboundCrossClusterSearchConnection(const RejectInboundCrossClusterSearchConnectionRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    StartElasticsearchServiceSoftwareUpdateResponse * startElasticsearchServiceSoftwareUpdate(const StartElasticsearchServiceSoftwareUpdateRequest &request);
    UpdateElasticsearchDomainConfigResponse * updateElasticsearchDomainConfig(const UpdateElasticsearchDomainConfigRequest &request);
    UpdatePackageResponse * updatePackage(const UpdatePackageRequest &request);
    UpgradeElasticsearchDomainResponse * upgradeElasticsearchDomain(const UpgradeElasticsearchDomainRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticsearchClient)
    Q_DISABLE_COPY(ElasticsearchClient)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
