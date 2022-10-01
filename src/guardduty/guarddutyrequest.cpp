// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "guarddutyrequest.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GuardDutyRequest
 * \brief The GuardDutyRequest class provides an interface for GuardDuty requests.
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * \enum GuardDutyRequest::Action
 *
 * This enum describes the actions that can be performed as GuardDuty
 * requests.
 *
 * \value AcceptAdministratorInvitationAction GuardDuty AcceptAdministratorInvitation action.
 * \value AcceptInvitationAction GuardDuty AcceptInvitation action.
 * \value ArchiveFindingsAction GuardDuty ArchiveFindings action.
 * \value CreateDetectorAction GuardDuty CreateDetector action.
 * \value CreateFilterAction GuardDuty CreateFilter action.
 * \value CreateIPSetAction GuardDuty CreateIPSet action.
 * \value CreateMembersAction GuardDuty CreateMembers action.
 * \value CreatePublishingDestinationAction GuardDuty CreatePublishingDestination action.
 * \value CreateSampleFindingsAction GuardDuty CreateSampleFindings action.
 * \value CreateThreatIntelSetAction GuardDuty CreateThreatIntelSet action.
 * \value DeclineInvitationsAction GuardDuty DeclineInvitations action.
 * \value DeleteDetectorAction GuardDuty DeleteDetector action.
 * \value DeleteFilterAction GuardDuty DeleteFilter action.
 * \value DeleteIPSetAction GuardDuty DeleteIPSet action.
 * \value DeleteInvitationsAction GuardDuty DeleteInvitations action.
 * \value DeleteMembersAction GuardDuty DeleteMembers action.
 * \value DeletePublishingDestinationAction GuardDuty DeletePublishingDestination action.
 * \value DeleteThreatIntelSetAction GuardDuty DeleteThreatIntelSet action.
 * \value DescribeMalwareScansAction GuardDuty DescribeMalwareScans action.
 * \value DescribeOrganizationConfigurationAction GuardDuty DescribeOrganizationConfiguration action.
 * \value DescribePublishingDestinationAction GuardDuty DescribePublishingDestination action.
 * \value DisableOrganizationAdminAccountAction GuardDuty DisableOrganizationAdminAccount action.
 * \value DisassociateFromAdministratorAccountAction GuardDuty DisassociateFromAdministratorAccount action.
 * \value DisassociateFromMasterAccountAction GuardDuty DisassociateFromMasterAccount action.
 * \value DisassociateMembersAction GuardDuty DisassociateMembers action.
 * \value EnableOrganizationAdminAccountAction GuardDuty EnableOrganizationAdminAccount action.
 * \value GetAdministratorAccountAction GuardDuty GetAdministratorAccount action.
 * \value GetDetectorAction GuardDuty GetDetector action.
 * \value GetFilterAction GuardDuty GetFilter action.
 * \value GetFindingsAction GuardDuty GetFindings action.
 * \value GetFindingsStatisticsAction GuardDuty GetFindingsStatistics action.
 * \value GetIPSetAction GuardDuty GetIPSet action.
 * \value GetInvitationsCountAction GuardDuty GetInvitationsCount action.
 * \value GetMalwareScanSettingsAction GuardDuty GetMalwareScanSettings action.
 * \value GetMasterAccountAction GuardDuty GetMasterAccount action.
 * \value GetMemberDetectorsAction GuardDuty GetMemberDetectors action.
 * \value GetMembersAction GuardDuty GetMembers action.
 * \value GetRemainingFreeTrialDaysAction GuardDuty GetRemainingFreeTrialDays action.
 * \value GetThreatIntelSetAction GuardDuty GetThreatIntelSet action.
 * \value GetUsageStatisticsAction GuardDuty GetUsageStatistics action.
 * \value InviteMembersAction GuardDuty InviteMembers action.
 * \value ListDetectorsAction GuardDuty ListDetectors action.
 * \value ListFiltersAction GuardDuty ListFilters action.
 * \value ListFindingsAction GuardDuty ListFindings action.
 * \value ListIPSetsAction GuardDuty ListIPSets action.
 * \value ListInvitationsAction GuardDuty ListInvitations action.
 * \value ListMembersAction GuardDuty ListMembers action.
 * \value ListOrganizationAdminAccountsAction GuardDuty ListOrganizationAdminAccounts action.
 * \value ListPublishingDestinationsAction GuardDuty ListPublishingDestinations action.
 * \value ListTagsForResourceAction GuardDuty ListTagsForResource action.
 * \value ListThreatIntelSetsAction GuardDuty ListThreatIntelSets action.
 * \value StartMonitoringMembersAction GuardDuty StartMonitoringMembers action.
 * \value StopMonitoringMembersAction GuardDuty StopMonitoringMembers action.
 * \value TagResourceAction GuardDuty TagResource action.
 * \value UnarchiveFindingsAction GuardDuty UnarchiveFindings action.
 * \value UntagResourceAction GuardDuty UntagResource action.
 * \value UpdateDetectorAction GuardDuty UpdateDetector action.
 * \value UpdateFilterAction GuardDuty UpdateFilter action.
 * \value UpdateFindingsFeedbackAction GuardDuty UpdateFindingsFeedback action.
 * \value UpdateIPSetAction GuardDuty UpdateIPSet action.
 * \value UpdateMalwareScanSettingsAction GuardDuty UpdateMalwareScanSettings action.
 * \value UpdateMemberDetectorsAction GuardDuty UpdateMemberDetectors action.
 * \value UpdateOrganizationConfigurationAction GuardDuty UpdateOrganizationConfiguration action.
 * \value UpdatePublishingDestinationAction GuardDuty UpdatePublishingDestination action.
 * \value UpdateThreatIntelSetAction GuardDuty UpdateThreatIntelSet action.
 */

/*!
 * Constructs a GuardDutyRequest object for GuardDuty \a action.
 */
GuardDutyRequest::GuardDutyRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new GuardDutyRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
GuardDutyRequest::GuardDutyRequest(const GuardDutyRequest &other)
    : QtAws::Core::AwsAbstractRequest(new GuardDutyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the GuardDutyRequest object to be equal to \a other.
 */
GuardDutyRequest& GuardDutyRequest::operator=(const GuardDutyRequest &other)
{
    Q_D(GuardDutyRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa GuardDutyRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from GuardDutyRequestPrivate.
 */
GuardDutyRequest::GuardDutyRequest(GuardDutyRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the GuardDuty action to be performed by this request.
 */
GuardDutyRequest::Action GuardDutyRequest::action() const
{
    Q_D(const GuardDutyRequest);
    return d->action;
}

/*!
 * Returns the name of the GuardDuty action to be performed by this request.
 */
QString GuardDutyRequest::actionString() const
{
    return GuardDutyRequestPrivate::toString(action());
}

/*!
 * Returns the GuardDuty API version implemented by this request.
 */
QString GuardDutyRequest::apiVersion() const
{
    Q_D(const GuardDutyRequest);
    return d->apiVersion;
}

/*!
 * Sets the GuardDuty action to be performed by this request to \a action.
 */
void GuardDutyRequest::setAction(const Action action)
{
    Q_D(GuardDutyRequest);
    d->action = action;
}

/*!
 * Sets the GuardDuty API version to include in this request to \a version.
 */
void GuardDutyRequest::setApiVersion(const QString &version)
{
    Q_D(GuardDutyRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool GuardDutyRequest::operator==(const GuardDutyRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid GuardDuty queue name.
 *
 * @par From GuardDuty FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid GuardDuty queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool GuardDutyRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int GuardDutyRequest::clearParameter(const QString &name)
{
    Q_D(GuardDutyRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void GuardDutyRequest::clearParameters()
{
    Q_D(GuardDutyRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant GuardDutyRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const GuardDutyRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &GuardDutyRequest::parameters() const
{
    Q_D(const GuardDutyRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void GuardDutyRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(GuardDutyRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void GuardDutyRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(GuardDutyRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the GuardDuty request using the given
 * \a endpoint.
 *
 * This GuardDuty implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest GuardDutyRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const GuardDutyRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::GuardDuty::GuardDutyRequestPrivate
 * \brief The GuardDutyRequestPrivate class provides private implementation for GuardDutyRequest.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GuardDutyRequestPrivate object for GuardDuty \a action,
 * with public implementation \a q.
 */
GuardDutyRequestPrivate::GuardDutyRequestPrivate(const GuardDutyRequest::Action action, GuardDutyRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-11-28"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the GuardDutyRequest class's copy constructor.
 */
GuardDutyRequestPrivate::GuardDutyRequestPrivate(const GuardDutyRequestPrivate &other,
                                     GuardDutyRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts GuardDutyRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the GuardDuty service's Action
 * query parameters.
 */
QString GuardDutyRequestPrivate::toString(const GuardDutyRequest::Action &action)
{
    #define ActionToString(action) \
        case GuardDutyRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AcceptAdministratorInvitation);
        ActionToString(AcceptInvitation);
        ActionToString(ArchiveFindings);
        ActionToString(CreateDetector);
        ActionToString(CreateFilter);
        ActionToString(CreateIPSet);
        ActionToString(CreateMembers);
        ActionToString(CreatePublishingDestination);
        ActionToString(CreateSampleFindings);
        ActionToString(CreateThreatIntelSet);
        ActionToString(DeclineInvitations);
        ActionToString(DeleteDetector);
        ActionToString(DeleteFilter);
        ActionToString(DeleteIPSet);
        ActionToString(DeleteInvitations);
        ActionToString(DeleteMembers);
        ActionToString(DeletePublishingDestination);
        ActionToString(DeleteThreatIntelSet);
        ActionToString(DescribeMalwareScans);
        ActionToString(DescribeOrganizationConfiguration);
        ActionToString(DescribePublishingDestination);
        ActionToString(DisableOrganizationAdminAccount);
        ActionToString(DisassociateFromAdministratorAccount);
        ActionToString(DisassociateFromMasterAccount);
        ActionToString(DisassociateMembers);
        ActionToString(EnableOrganizationAdminAccount);
        ActionToString(GetAdministratorAccount);
        ActionToString(GetDetector);
        ActionToString(GetFilter);
        ActionToString(GetFindings);
        ActionToString(GetFindingsStatistics);
        ActionToString(GetIPSet);
        ActionToString(GetInvitationsCount);
        ActionToString(GetMalwareScanSettings);
        ActionToString(GetMasterAccount);
        ActionToString(GetMemberDetectors);
        ActionToString(GetMembers);
        ActionToString(GetRemainingFreeTrialDays);
        ActionToString(GetThreatIntelSet);
        ActionToString(GetUsageStatistics);
        ActionToString(InviteMembers);
        ActionToString(ListDetectors);
        ActionToString(ListFilters);
        ActionToString(ListFindings);
        ActionToString(ListIPSets);
        ActionToString(ListInvitations);
        ActionToString(ListMembers);
        ActionToString(ListOrganizationAdminAccounts);
        ActionToString(ListPublishingDestinations);
        ActionToString(ListTagsForResource);
        ActionToString(ListThreatIntelSets);
        ActionToString(StartMonitoringMembers);
        ActionToString(StopMonitoringMembers);
        ActionToString(TagResource);
        ActionToString(UnarchiveFindings);
        ActionToString(UntagResource);
        ActionToString(UpdateDetector);
        ActionToString(UpdateFilter);
        ActionToString(UpdateFindingsFeedback);
        ActionToString(UpdateIPSet);
        ActionToString(UpdateMalwareScanSettings);
        ActionToString(UpdateMemberDetectors);
        ActionToString(UpdateOrganizationConfiguration);
        ActionToString(UpdatePublishingDestination);
        ActionToString(UpdateThreatIntelSet);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace GuardDuty
} // namespace QtAws
