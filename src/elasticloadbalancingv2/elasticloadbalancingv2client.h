// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGV2CLIENT_H
#define QTAWS_ELASTICLOADBALANCINGV2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawselasticloadbalancingv2global.h"

class QNetworkReply;

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2ClientPrivate;
class AddListenerCertificatesRequest;
class AddListenerCertificatesResponse;
class AddTagsRequest;
class AddTagsResponse;
class CreateListenerRequest;
class CreateListenerResponse;
class CreateLoadBalancerRequest;
class CreateLoadBalancerResponse;
class CreateRuleRequest;
class CreateRuleResponse;
class CreateTargetGroupRequest;
class CreateTargetGroupResponse;
class DeleteListenerRequest;
class DeleteListenerResponse;
class DeleteLoadBalancerRequest;
class DeleteLoadBalancerResponse;
class DeleteRuleRequest;
class DeleteRuleResponse;
class DeleteTargetGroupRequest;
class DeleteTargetGroupResponse;
class DeregisterTargetsRequest;
class DeregisterTargetsResponse;
class DescribeAccountLimitsRequest;
class DescribeAccountLimitsResponse;
class DescribeListenerCertificatesRequest;
class DescribeListenerCertificatesResponse;
class DescribeListenersRequest;
class DescribeListenersResponse;
class DescribeLoadBalancerAttributesRequest;
class DescribeLoadBalancerAttributesResponse;
class DescribeLoadBalancersRequest;
class DescribeLoadBalancersResponse;
class DescribeRulesRequest;
class DescribeRulesResponse;
class DescribeSSLPoliciesRequest;
class DescribeSSLPoliciesResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class DescribeTargetGroupAttributesRequest;
class DescribeTargetGroupAttributesResponse;
class DescribeTargetGroupsRequest;
class DescribeTargetGroupsResponse;
class DescribeTargetHealthRequest;
class DescribeTargetHealthResponse;
class ModifyListenerRequest;
class ModifyListenerResponse;
class ModifyLoadBalancerAttributesRequest;
class ModifyLoadBalancerAttributesResponse;
class ModifyRuleRequest;
class ModifyRuleResponse;
class ModifyTargetGroupRequest;
class ModifyTargetGroupResponse;
class ModifyTargetGroupAttributesRequest;
class ModifyTargetGroupAttributesResponse;
class RegisterTargetsRequest;
class RegisterTargetsResponse;
class RemoveListenerCertificatesRequest;
class RemoveListenerCertificatesResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class SetIpAddressTypeRequest;
class SetIpAddressTypeResponse;
class SetRulePrioritiesRequest;
class SetRulePrioritiesResponse;
class SetSecurityGroupsRequest;
class SetSecurityGroupsResponse;
class SetSubnetsRequest;
class SetSubnetsResponse;

class QTAWSELASTICLOADBALANCINGV2_EXPORT ElasticLoadBalancingv2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ElasticLoadBalancingv2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ElasticLoadBalancingv2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddListenerCertificatesResponse * addListenerCertificates(const AddListenerCertificatesRequest &request);
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreateListenerResponse * createListener(const CreateListenerRequest &request);
    CreateLoadBalancerResponse * createLoadBalancer(const CreateLoadBalancerRequest &request);
    CreateRuleResponse * createRule(const CreateRuleRequest &request);
    CreateTargetGroupResponse * createTargetGroup(const CreateTargetGroupRequest &request);
    DeleteListenerResponse * deleteListener(const DeleteListenerRequest &request);
    DeleteLoadBalancerResponse * deleteLoadBalancer(const DeleteLoadBalancerRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DeleteTargetGroupResponse * deleteTargetGroup(const DeleteTargetGroupRequest &request);
    DeregisterTargetsResponse * deregisterTargets(const DeregisterTargetsRequest &request);
    DescribeAccountLimitsResponse * describeAccountLimits(const DescribeAccountLimitsRequest &request);
    DescribeListenerCertificatesResponse * describeListenerCertificates(const DescribeListenerCertificatesRequest &request);
    DescribeListenersResponse * describeListeners(const DescribeListenersRequest &request);
    DescribeLoadBalancerAttributesResponse * describeLoadBalancerAttributes(const DescribeLoadBalancerAttributesRequest &request);
    DescribeLoadBalancersResponse * describeLoadBalancers(const DescribeLoadBalancersRequest &request);
    DescribeRulesResponse * describeRules(const DescribeRulesRequest &request);
    DescribeSSLPoliciesResponse * describeSSLPolicies(const DescribeSSLPoliciesRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    DescribeTargetGroupAttributesResponse * describeTargetGroupAttributes(const DescribeTargetGroupAttributesRequest &request);
    DescribeTargetGroupsResponse * describeTargetGroups(const DescribeTargetGroupsRequest &request);
    DescribeTargetHealthResponse * describeTargetHealth(const DescribeTargetHealthRequest &request);
    ModifyListenerResponse * modifyListener(const ModifyListenerRequest &request);
    ModifyLoadBalancerAttributesResponse * modifyLoadBalancerAttributes(const ModifyLoadBalancerAttributesRequest &request);
    ModifyRuleResponse * modifyRule(const ModifyRuleRequest &request);
    ModifyTargetGroupResponse * modifyTargetGroup(const ModifyTargetGroupRequest &request);
    ModifyTargetGroupAttributesResponse * modifyTargetGroupAttributes(const ModifyTargetGroupAttributesRequest &request);
    RegisterTargetsResponse * registerTargets(const RegisterTargetsRequest &request);
    RemoveListenerCertificatesResponse * removeListenerCertificates(const RemoveListenerCertificatesRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    SetIpAddressTypeResponse * setIpAddressType(const SetIpAddressTypeRequest &request);
    SetRulePrioritiesResponse * setRulePriorities(const SetRulePrioritiesRequest &request);
    SetSecurityGroupsResponse * setSecurityGroups(const SetSecurityGroupsRequest &request);
    SetSubnetsResponse * setSubnets(const SetSubnetsRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticLoadBalancingv2Client)
    Q_DISABLE_COPY(ElasticLoadBalancingv2Client)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
