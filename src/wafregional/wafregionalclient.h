// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WAFREGIONALCLIENT_H
#define QTAWS_WAFREGIONALCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawswafregionalglobal.h"

class QNetworkReply;

namespace QtAws {
namespace WafRegional {

class WafRegionalClientPrivate;
class AssociateWebACLRequest;
class AssociateWebACLResponse;
class CreateByteMatchSetRequest;
class CreateByteMatchSetResponse;
class CreateGeoMatchSetRequest;
class CreateGeoMatchSetResponse;
class CreateIPSetRequest;
class CreateIPSetResponse;
class CreateRateBasedRuleRequest;
class CreateRateBasedRuleResponse;
class CreateRegexMatchSetRequest;
class CreateRegexMatchSetResponse;
class CreateRegexPatternSetRequest;
class CreateRegexPatternSetResponse;
class CreateRuleRequest;
class CreateRuleResponse;
class CreateRuleGroupRequest;
class CreateRuleGroupResponse;
class CreateSizeConstraintSetRequest;
class CreateSizeConstraintSetResponse;
class CreateSqlInjectionMatchSetRequest;
class CreateSqlInjectionMatchSetResponse;
class CreateWebACLRequest;
class CreateWebACLResponse;
class CreateWebACLMigrationStackRequest;
class CreateWebACLMigrationStackResponse;
class CreateXssMatchSetRequest;
class CreateXssMatchSetResponse;
class DeleteByteMatchSetRequest;
class DeleteByteMatchSetResponse;
class DeleteGeoMatchSetRequest;
class DeleteGeoMatchSetResponse;
class DeleteIPSetRequest;
class DeleteIPSetResponse;
class DeleteLoggingConfigurationRequest;
class DeleteLoggingConfigurationResponse;
class DeletePermissionPolicyRequest;
class DeletePermissionPolicyResponse;
class DeleteRateBasedRuleRequest;
class DeleteRateBasedRuleResponse;
class DeleteRegexMatchSetRequest;
class DeleteRegexMatchSetResponse;
class DeleteRegexPatternSetRequest;
class DeleteRegexPatternSetResponse;
class DeleteRuleRequest;
class DeleteRuleResponse;
class DeleteRuleGroupRequest;
class DeleteRuleGroupResponse;
class DeleteSizeConstraintSetRequest;
class DeleteSizeConstraintSetResponse;
class DeleteSqlInjectionMatchSetRequest;
class DeleteSqlInjectionMatchSetResponse;
class DeleteWebACLRequest;
class DeleteWebACLResponse;
class DeleteXssMatchSetRequest;
class DeleteXssMatchSetResponse;
class DisassociateWebACLRequest;
class DisassociateWebACLResponse;
class GetByteMatchSetRequest;
class GetByteMatchSetResponse;
class GetChangeTokenRequest;
class GetChangeTokenResponse;
class GetChangeTokenStatusRequest;
class GetChangeTokenStatusResponse;
class GetGeoMatchSetRequest;
class GetGeoMatchSetResponse;
class GetIPSetRequest;
class GetIPSetResponse;
class GetLoggingConfigurationRequest;
class GetLoggingConfigurationResponse;
class GetPermissionPolicyRequest;
class GetPermissionPolicyResponse;
class GetRateBasedRuleRequest;
class GetRateBasedRuleResponse;
class GetRateBasedRuleManagedKeysRequest;
class GetRateBasedRuleManagedKeysResponse;
class GetRegexMatchSetRequest;
class GetRegexMatchSetResponse;
class GetRegexPatternSetRequest;
class GetRegexPatternSetResponse;
class GetRuleRequest;
class GetRuleResponse;
class GetRuleGroupRequest;
class GetRuleGroupResponse;
class GetSampledRequestsRequest;
class GetSampledRequestsResponse;
class GetSizeConstraintSetRequest;
class GetSizeConstraintSetResponse;
class GetSqlInjectionMatchSetRequest;
class GetSqlInjectionMatchSetResponse;
class GetWebACLRequest;
class GetWebACLResponse;
class GetWebACLForResourceRequest;
class GetWebACLForResourceResponse;
class GetXssMatchSetRequest;
class GetXssMatchSetResponse;
class ListActivatedRulesInRuleGroupRequest;
class ListActivatedRulesInRuleGroupResponse;
class ListByteMatchSetsRequest;
class ListByteMatchSetsResponse;
class ListGeoMatchSetsRequest;
class ListGeoMatchSetsResponse;
class ListIPSetsRequest;
class ListIPSetsResponse;
class ListLoggingConfigurationsRequest;
class ListLoggingConfigurationsResponse;
class ListRateBasedRulesRequest;
class ListRateBasedRulesResponse;
class ListRegexMatchSetsRequest;
class ListRegexMatchSetsResponse;
class ListRegexPatternSetsRequest;
class ListRegexPatternSetsResponse;
class ListResourcesForWebACLRequest;
class ListResourcesForWebACLResponse;
class ListRuleGroupsRequest;
class ListRuleGroupsResponse;
class ListRulesRequest;
class ListRulesResponse;
class ListSizeConstraintSetsRequest;
class ListSizeConstraintSetsResponse;
class ListSqlInjectionMatchSetsRequest;
class ListSqlInjectionMatchSetsResponse;
class ListSubscribedRuleGroupsRequest;
class ListSubscribedRuleGroupsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWebACLsRequest;
class ListWebACLsResponse;
class ListXssMatchSetsRequest;
class ListXssMatchSetsResponse;
class PutLoggingConfigurationRequest;
class PutLoggingConfigurationResponse;
class PutPermissionPolicyRequest;
class PutPermissionPolicyResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateByteMatchSetRequest;
class UpdateByteMatchSetResponse;
class UpdateGeoMatchSetRequest;
class UpdateGeoMatchSetResponse;
class UpdateIPSetRequest;
class UpdateIPSetResponse;
class UpdateRateBasedRuleRequest;
class UpdateRateBasedRuleResponse;
class UpdateRegexMatchSetRequest;
class UpdateRegexMatchSetResponse;
class UpdateRegexPatternSetRequest;
class UpdateRegexPatternSetResponse;
class UpdateRuleRequest;
class UpdateRuleResponse;
class UpdateRuleGroupRequest;
class UpdateRuleGroupResponse;
class UpdateSizeConstraintSetRequest;
class UpdateSizeConstraintSetResponse;
class UpdateSqlInjectionMatchSetRequest;
class UpdateSqlInjectionMatchSetResponse;
class UpdateWebACLRequest;
class UpdateWebACLResponse;
class UpdateXssMatchSetRequest;
class UpdateXssMatchSetResponse;

class QTAWSWAFREGIONAL_EXPORT WafRegionalClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    WafRegionalClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit WafRegionalClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateWebACLResponse * associateWebACL(const AssociateWebACLRequest &request);
    CreateByteMatchSetResponse * createByteMatchSet(const CreateByteMatchSetRequest &request);
    CreateGeoMatchSetResponse * createGeoMatchSet(const CreateGeoMatchSetRequest &request);
    CreateIPSetResponse * createIPSet(const CreateIPSetRequest &request);
    CreateRateBasedRuleResponse * createRateBasedRule(const CreateRateBasedRuleRequest &request);
    CreateRegexMatchSetResponse * createRegexMatchSet(const CreateRegexMatchSetRequest &request);
    CreateRegexPatternSetResponse * createRegexPatternSet(const CreateRegexPatternSetRequest &request);
    CreateRuleResponse * createRule(const CreateRuleRequest &request);
    CreateRuleGroupResponse * createRuleGroup(const CreateRuleGroupRequest &request);
    CreateSizeConstraintSetResponse * createSizeConstraintSet(const CreateSizeConstraintSetRequest &request);
    CreateSqlInjectionMatchSetResponse * createSqlInjectionMatchSet(const CreateSqlInjectionMatchSetRequest &request);
    CreateWebACLResponse * createWebACL(const CreateWebACLRequest &request);
    CreateWebACLMigrationStackResponse * createWebACLMigrationStack(const CreateWebACLMigrationStackRequest &request);
    CreateXssMatchSetResponse * createXssMatchSet(const CreateXssMatchSetRequest &request);
    DeleteByteMatchSetResponse * deleteByteMatchSet(const DeleteByteMatchSetRequest &request);
    DeleteGeoMatchSetResponse * deleteGeoMatchSet(const DeleteGeoMatchSetRequest &request);
    DeleteIPSetResponse * deleteIPSet(const DeleteIPSetRequest &request);
    DeleteLoggingConfigurationResponse * deleteLoggingConfiguration(const DeleteLoggingConfigurationRequest &request);
    DeletePermissionPolicyResponse * deletePermissionPolicy(const DeletePermissionPolicyRequest &request);
    DeleteRateBasedRuleResponse * deleteRateBasedRule(const DeleteRateBasedRuleRequest &request);
    DeleteRegexMatchSetResponse * deleteRegexMatchSet(const DeleteRegexMatchSetRequest &request);
    DeleteRegexPatternSetResponse * deleteRegexPatternSet(const DeleteRegexPatternSetRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DeleteRuleGroupResponse * deleteRuleGroup(const DeleteRuleGroupRequest &request);
    DeleteSizeConstraintSetResponse * deleteSizeConstraintSet(const DeleteSizeConstraintSetRequest &request);
    DeleteSqlInjectionMatchSetResponse * deleteSqlInjectionMatchSet(const DeleteSqlInjectionMatchSetRequest &request);
    DeleteWebACLResponse * deleteWebACL(const DeleteWebACLRequest &request);
    DeleteXssMatchSetResponse * deleteXssMatchSet(const DeleteXssMatchSetRequest &request);
    DisassociateWebACLResponse * disassociateWebACL(const DisassociateWebACLRequest &request);
    GetByteMatchSetResponse * getByteMatchSet(const GetByteMatchSetRequest &request);
    GetChangeTokenResponse * getChangeToken(const GetChangeTokenRequest &request);
    GetChangeTokenStatusResponse * getChangeTokenStatus(const GetChangeTokenStatusRequest &request);
    GetGeoMatchSetResponse * getGeoMatchSet(const GetGeoMatchSetRequest &request);
    GetIPSetResponse * getIPSet(const GetIPSetRequest &request);
    GetLoggingConfigurationResponse * getLoggingConfiguration(const GetLoggingConfigurationRequest &request);
    GetPermissionPolicyResponse * getPermissionPolicy(const GetPermissionPolicyRequest &request);
    GetRateBasedRuleResponse * getRateBasedRule(const GetRateBasedRuleRequest &request);
    GetRateBasedRuleManagedKeysResponse * getRateBasedRuleManagedKeys(const GetRateBasedRuleManagedKeysRequest &request);
    GetRegexMatchSetResponse * getRegexMatchSet(const GetRegexMatchSetRequest &request);
    GetRegexPatternSetResponse * getRegexPatternSet(const GetRegexPatternSetRequest &request);
    GetRuleResponse * getRule(const GetRuleRequest &request);
    GetRuleGroupResponse * getRuleGroup(const GetRuleGroupRequest &request);
    GetSampledRequestsResponse * getSampledRequests(const GetSampledRequestsRequest &request);
    GetSizeConstraintSetResponse * getSizeConstraintSet(const GetSizeConstraintSetRequest &request);
    GetSqlInjectionMatchSetResponse * getSqlInjectionMatchSet(const GetSqlInjectionMatchSetRequest &request);
    GetWebACLResponse * getWebACL(const GetWebACLRequest &request);
    GetWebACLForResourceResponse * getWebACLForResource(const GetWebACLForResourceRequest &request);
    GetXssMatchSetResponse * getXssMatchSet(const GetXssMatchSetRequest &request);
    ListActivatedRulesInRuleGroupResponse * listActivatedRulesInRuleGroup(const ListActivatedRulesInRuleGroupRequest &request);
    ListByteMatchSetsResponse * listByteMatchSets(const ListByteMatchSetsRequest &request);
    ListGeoMatchSetsResponse * listGeoMatchSets(const ListGeoMatchSetsRequest &request);
    ListIPSetsResponse * listIPSets(const ListIPSetsRequest &request);
    ListLoggingConfigurationsResponse * listLoggingConfigurations(const ListLoggingConfigurationsRequest &request);
    ListRateBasedRulesResponse * listRateBasedRules(const ListRateBasedRulesRequest &request);
    ListRegexMatchSetsResponse * listRegexMatchSets(const ListRegexMatchSetsRequest &request);
    ListRegexPatternSetsResponse * listRegexPatternSets(const ListRegexPatternSetsRequest &request);
    ListResourcesForWebACLResponse * listResourcesForWebACL(const ListResourcesForWebACLRequest &request);
    ListRuleGroupsResponse * listRuleGroups(const ListRuleGroupsRequest &request);
    ListRulesResponse * listRules(const ListRulesRequest &request);
    ListSizeConstraintSetsResponse * listSizeConstraintSets(const ListSizeConstraintSetsRequest &request);
    ListSqlInjectionMatchSetsResponse * listSqlInjectionMatchSets(const ListSqlInjectionMatchSetsRequest &request);
    ListSubscribedRuleGroupsResponse * listSubscribedRuleGroups(const ListSubscribedRuleGroupsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWebACLsResponse * listWebACLs(const ListWebACLsRequest &request);
    ListXssMatchSetsResponse * listXssMatchSets(const ListXssMatchSetsRequest &request);
    PutLoggingConfigurationResponse * putLoggingConfiguration(const PutLoggingConfigurationRequest &request);
    PutPermissionPolicyResponse * putPermissionPolicy(const PutPermissionPolicyRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateByteMatchSetResponse * updateByteMatchSet(const UpdateByteMatchSetRequest &request);
    UpdateGeoMatchSetResponse * updateGeoMatchSet(const UpdateGeoMatchSetRequest &request);
    UpdateIPSetResponse * updateIPSet(const UpdateIPSetRequest &request);
    UpdateRateBasedRuleResponse * updateRateBasedRule(const UpdateRateBasedRuleRequest &request);
    UpdateRegexMatchSetResponse * updateRegexMatchSet(const UpdateRegexMatchSetRequest &request);
    UpdateRegexPatternSetResponse * updateRegexPatternSet(const UpdateRegexPatternSetRequest &request);
    UpdateRuleResponse * updateRule(const UpdateRuleRequest &request);
    UpdateRuleGroupResponse * updateRuleGroup(const UpdateRuleGroupRequest &request);
    UpdateSizeConstraintSetResponse * updateSizeConstraintSet(const UpdateSizeConstraintSetRequest &request);
    UpdateSqlInjectionMatchSetResponse * updateSqlInjectionMatchSet(const UpdateSqlInjectionMatchSetRequest &request);
    UpdateWebACLResponse * updateWebACL(const UpdateWebACLRequest &request);
    UpdateXssMatchSetResponse * updateXssMatchSet(const UpdateXssMatchSetRequest &request);

private:
    Q_DECLARE_PRIVATE(WafRegionalClient)
    Q_DISABLE_COPY(WafRegionalClient)

};

} // namespace WafRegional
} // namespace QtAws

#endif
