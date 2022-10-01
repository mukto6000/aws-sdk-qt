// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "alexaforbusinessrequest.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AlexaForBusinessRequest
 * \brief The AlexaForBusinessRequest class provides an interface for AlexaForBusiness requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * \enum AlexaForBusinessRequest::Action
 *
 * This enum describes the actions that can be performed as AlexaForBusiness
 * requests.
 *
 * \value ApproveSkillAction AlexaForBusiness ApproveSkill action.
 * \value AssociateContactWithAddressBookAction AlexaForBusiness AssociateContactWithAddressBook action.
 * \value AssociateDeviceWithNetworkProfileAction AlexaForBusiness AssociateDeviceWithNetworkProfile action.
 * \value AssociateDeviceWithRoomAction AlexaForBusiness AssociateDeviceWithRoom action.
 * \value AssociateSkillGroupWithRoomAction AlexaForBusiness AssociateSkillGroupWithRoom action.
 * \value AssociateSkillWithSkillGroupAction AlexaForBusiness AssociateSkillWithSkillGroup action.
 * \value AssociateSkillWithUsersAction AlexaForBusiness AssociateSkillWithUsers action.
 * \value CreateAddressBookAction AlexaForBusiness CreateAddressBook action.
 * \value CreateBusinessReportScheduleAction AlexaForBusiness CreateBusinessReportSchedule action.
 * \value CreateConferenceProviderAction AlexaForBusiness CreateConferenceProvider action.
 * \value CreateContactAction AlexaForBusiness CreateContact action.
 * \value CreateGatewayGroupAction AlexaForBusiness CreateGatewayGroup action.
 * \value CreateNetworkProfileAction AlexaForBusiness CreateNetworkProfile action.
 * \value CreateProfileAction AlexaForBusiness CreateProfile action.
 * \value CreateRoomAction AlexaForBusiness CreateRoom action.
 * \value CreateSkillGroupAction AlexaForBusiness CreateSkillGroup action.
 * \value CreateUserAction AlexaForBusiness CreateUser action.
 * \value DeleteAddressBookAction AlexaForBusiness DeleteAddressBook action.
 * \value DeleteBusinessReportScheduleAction AlexaForBusiness DeleteBusinessReportSchedule action.
 * \value DeleteConferenceProviderAction AlexaForBusiness DeleteConferenceProvider action.
 * \value DeleteContactAction AlexaForBusiness DeleteContact action.
 * \value DeleteDeviceAction AlexaForBusiness DeleteDevice action.
 * \value DeleteDeviceUsageDataAction AlexaForBusiness DeleteDeviceUsageData action.
 * \value DeleteGatewayGroupAction AlexaForBusiness DeleteGatewayGroup action.
 * \value DeleteNetworkProfileAction AlexaForBusiness DeleteNetworkProfile action.
 * \value DeleteProfileAction AlexaForBusiness DeleteProfile action.
 * \value DeleteRoomAction AlexaForBusiness DeleteRoom action.
 * \value DeleteRoomSkillParameterAction AlexaForBusiness DeleteRoomSkillParameter action.
 * \value DeleteSkillAuthorizationAction AlexaForBusiness DeleteSkillAuthorization action.
 * \value DeleteSkillGroupAction AlexaForBusiness DeleteSkillGroup action.
 * \value DeleteUserAction AlexaForBusiness DeleteUser action.
 * \value DisassociateContactFromAddressBookAction AlexaForBusiness DisassociateContactFromAddressBook action.
 * \value DisassociateDeviceFromRoomAction AlexaForBusiness DisassociateDeviceFromRoom action.
 * \value DisassociateSkillFromSkillGroupAction AlexaForBusiness DisassociateSkillFromSkillGroup action.
 * \value DisassociateSkillFromUsersAction AlexaForBusiness DisassociateSkillFromUsers action.
 * \value DisassociateSkillGroupFromRoomAction AlexaForBusiness DisassociateSkillGroupFromRoom action.
 * \value ForgetSmartHomeAppliancesAction AlexaForBusiness ForgetSmartHomeAppliances action.
 * \value GetAddressBookAction AlexaForBusiness GetAddressBook action.
 * \value GetConferencePreferenceAction AlexaForBusiness GetConferencePreference action.
 * \value GetConferenceProviderAction AlexaForBusiness GetConferenceProvider action.
 * \value GetContactAction AlexaForBusiness GetContact action.
 * \value GetDeviceAction AlexaForBusiness GetDevice action.
 * \value GetGatewayAction AlexaForBusiness GetGateway action.
 * \value GetGatewayGroupAction AlexaForBusiness GetGatewayGroup action.
 * \value GetInvitationConfigurationAction AlexaForBusiness GetInvitationConfiguration action.
 * \value GetNetworkProfileAction AlexaForBusiness GetNetworkProfile action.
 * \value GetProfileAction AlexaForBusiness GetProfile action.
 * \value GetRoomAction AlexaForBusiness GetRoom action.
 * \value GetRoomSkillParameterAction AlexaForBusiness GetRoomSkillParameter action.
 * \value GetSkillGroupAction AlexaForBusiness GetSkillGroup action.
 * \value ListBusinessReportSchedulesAction AlexaForBusiness ListBusinessReportSchedules action.
 * \value ListConferenceProvidersAction AlexaForBusiness ListConferenceProviders action.
 * \value ListDeviceEventsAction AlexaForBusiness ListDeviceEvents action.
 * \value ListGatewayGroupsAction AlexaForBusiness ListGatewayGroups action.
 * \value ListGatewaysAction AlexaForBusiness ListGateways action.
 * \value ListSkillsAction AlexaForBusiness ListSkills action.
 * \value ListSkillsStoreCategoriesAction AlexaForBusiness ListSkillsStoreCategories action.
 * \value ListSkillsStoreSkillsByCategoryAction AlexaForBusiness ListSkillsStoreSkillsByCategory action.
 * \value ListSmartHomeAppliancesAction AlexaForBusiness ListSmartHomeAppliances action.
 * \value ListTagsAction AlexaForBusiness ListTags action.
 * \value PutConferencePreferenceAction AlexaForBusiness PutConferencePreference action.
 * \value PutInvitationConfigurationAction AlexaForBusiness PutInvitationConfiguration action.
 * \value PutRoomSkillParameterAction AlexaForBusiness PutRoomSkillParameter action.
 * \value PutSkillAuthorizationAction AlexaForBusiness PutSkillAuthorization action.
 * \value RegisterAVSDeviceAction AlexaForBusiness RegisterAVSDevice action.
 * \value RejectSkillAction AlexaForBusiness RejectSkill action.
 * \value ResolveRoomAction AlexaForBusiness ResolveRoom action.
 * \value RevokeInvitationAction AlexaForBusiness RevokeInvitation action.
 * \value SearchAddressBooksAction AlexaForBusiness SearchAddressBooks action.
 * \value SearchContactsAction AlexaForBusiness SearchContacts action.
 * \value SearchDevicesAction AlexaForBusiness SearchDevices action.
 * \value SearchNetworkProfilesAction AlexaForBusiness SearchNetworkProfiles action.
 * \value SearchProfilesAction AlexaForBusiness SearchProfiles action.
 * \value SearchRoomsAction AlexaForBusiness SearchRooms action.
 * \value SearchSkillGroupsAction AlexaForBusiness SearchSkillGroups action.
 * \value SearchUsersAction AlexaForBusiness SearchUsers action.
 * \value SendAnnouncementAction AlexaForBusiness SendAnnouncement action.
 * \value SendInvitationAction AlexaForBusiness SendInvitation action.
 * \value StartDeviceSyncAction AlexaForBusiness StartDeviceSync action.
 * \value StartSmartHomeApplianceDiscoveryAction AlexaForBusiness StartSmartHomeApplianceDiscovery action.
 * \value TagResourceAction AlexaForBusiness TagResource action.
 * \value UntagResourceAction AlexaForBusiness UntagResource action.
 * \value UpdateAddressBookAction AlexaForBusiness UpdateAddressBook action.
 * \value UpdateBusinessReportScheduleAction AlexaForBusiness UpdateBusinessReportSchedule action.
 * \value UpdateConferenceProviderAction AlexaForBusiness UpdateConferenceProvider action.
 * \value UpdateContactAction AlexaForBusiness UpdateContact action.
 * \value UpdateDeviceAction AlexaForBusiness UpdateDevice action.
 * \value UpdateGatewayAction AlexaForBusiness UpdateGateway action.
 * \value UpdateGatewayGroupAction AlexaForBusiness UpdateGatewayGroup action.
 * \value UpdateNetworkProfileAction AlexaForBusiness UpdateNetworkProfile action.
 * \value UpdateProfileAction AlexaForBusiness UpdateProfile action.
 * \value UpdateRoomAction AlexaForBusiness UpdateRoom action.
 * \value UpdateSkillGroupAction AlexaForBusiness UpdateSkillGroup action.
 */

/*!
 * Constructs a AlexaForBusinessRequest object for AlexaForBusiness \a action.
 */
AlexaForBusinessRequest::AlexaForBusinessRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new AlexaForBusinessRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
AlexaForBusinessRequest::AlexaForBusinessRequest(const AlexaForBusinessRequest &other)
    : QtAws::Core::AwsAbstractRequest(new AlexaForBusinessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the AlexaForBusinessRequest object to be equal to \a other.
 */
AlexaForBusinessRequest& AlexaForBusinessRequest::operator=(const AlexaForBusinessRequest &other)
{
    Q_D(AlexaForBusinessRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa AlexaForBusinessRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from AlexaForBusinessRequestPrivate.
 */
AlexaForBusinessRequest::AlexaForBusinessRequest(AlexaForBusinessRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the AlexaForBusiness action to be performed by this request.
 */
AlexaForBusinessRequest::Action AlexaForBusinessRequest::action() const
{
    Q_D(const AlexaForBusinessRequest);
    return d->action;
}

/*!
 * Returns the name of the AlexaForBusiness action to be performed by this request.
 */
QString AlexaForBusinessRequest::actionString() const
{
    return AlexaForBusinessRequestPrivate::toString(action());
}

/*!
 * Returns the AlexaForBusiness API version implemented by this request.
 */
QString AlexaForBusinessRequest::apiVersion() const
{
    Q_D(const AlexaForBusinessRequest);
    return d->apiVersion;
}

/*!
 * Sets the AlexaForBusiness action to be performed by this request to \a action.
 */
void AlexaForBusinessRequest::setAction(const Action action)
{
    Q_D(AlexaForBusinessRequest);
    d->action = action;
}

/*!
 * Sets the AlexaForBusiness API version to include in this request to \a version.
 */
void AlexaForBusinessRequest::setApiVersion(const QString &version)
{
    Q_D(AlexaForBusinessRequest);
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
bool AlexaForBusinessRequest::operator==(const AlexaForBusinessRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid AlexaForBusiness queue name.
 *
 * @par From AlexaForBusiness FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid AlexaForBusiness queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool AlexaForBusinessRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int AlexaForBusinessRequest::clearParameter(const QString &name)
{
    Q_D(AlexaForBusinessRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void AlexaForBusinessRequest::clearParameters()
{
    Q_D(AlexaForBusinessRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant AlexaForBusinessRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const AlexaForBusinessRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &AlexaForBusinessRequest::parameters() const
{
    Q_D(const AlexaForBusinessRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void AlexaForBusinessRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(AlexaForBusinessRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void AlexaForBusinessRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(AlexaForBusinessRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the AlexaForBusiness request using the given
 * \a endpoint.
 *
 * This AlexaForBusiness implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest AlexaForBusinessRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const AlexaForBusinessRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::AlexaForBusiness::AlexaForBusinessRequestPrivate
 * \brief The AlexaForBusinessRequestPrivate class provides private implementation for AlexaForBusinessRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AlexaForBusinessRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
AlexaForBusinessRequestPrivate::AlexaForBusinessRequestPrivate(const AlexaForBusinessRequest::Action action, AlexaForBusinessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-11-09"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the AlexaForBusinessRequest class's copy constructor.
 */
AlexaForBusinessRequestPrivate::AlexaForBusinessRequestPrivate(const AlexaForBusinessRequestPrivate &other,
                                     AlexaForBusinessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts AlexaForBusinessRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the AlexaForBusiness service's Action
 * query parameters.
 */
QString AlexaForBusinessRequestPrivate::toString(const AlexaForBusinessRequest::Action &action)
{
    #define ActionToString(action) \
        case AlexaForBusinessRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(ApproveSkill);
        ActionToString(AssociateContactWithAddressBook);
        ActionToString(AssociateDeviceWithNetworkProfile);
        ActionToString(AssociateDeviceWithRoom);
        ActionToString(AssociateSkillGroupWithRoom);
        ActionToString(AssociateSkillWithSkillGroup);
        ActionToString(AssociateSkillWithUsers);
        ActionToString(CreateAddressBook);
        ActionToString(CreateBusinessReportSchedule);
        ActionToString(CreateConferenceProvider);
        ActionToString(CreateContact);
        ActionToString(CreateGatewayGroup);
        ActionToString(CreateNetworkProfile);
        ActionToString(CreateProfile);
        ActionToString(CreateRoom);
        ActionToString(CreateSkillGroup);
        ActionToString(CreateUser);
        ActionToString(DeleteAddressBook);
        ActionToString(DeleteBusinessReportSchedule);
        ActionToString(DeleteConferenceProvider);
        ActionToString(DeleteContact);
        ActionToString(DeleteDevice);
        ActionToString(DeleteDeviceUsageData);
        ActionToString(DeleteGatewayGroup);
        ActionToString(DeleteNetworkProfile);
        ActionToString(DeleteProfile);
        ActionToString(DeleteRoom);
        ActionToString(DeleteRoomSkillParameter);
        ActionToString(DeleteSkillAuthorization);
        ActionToString(DeleteSkillGroup);
        ActionToString(DeleteUser);
        ActionToString(DisassociateContactFromAddressBook);
        ActionToString(DisassociateDeviceFromRoom);
        ActionToString(DisassociateSkillFromSkillGroup);
        ActionToString(DisassociateSkillFromUsers);
        ActionToString(DisassociateSkillGroupFromRoom);
        ActionToString(ForgetSmartHomeAppliances);
        ActionToString(GetAddressBook);
        ActionToString(GetConferencePreference);
        ActionToString(GetConferenceProvider);
        ActionToString(GetContact);
        ActionToString(GetDevice);
        ActionToString(GetGateway);
        ActionToString(GetGatewayGroup);
        ActionToString(GetInvitationConfiguration);
        ActionToString(GetNetworkProfile);
        ActionToString(GetProfile);
        ActionToString(GetRoom);
        ActionToString(GetRoomSkillParameter);
        ActionToString(GetSkillGroup);
        ActionToString(ListBusinessReportSchedules);
        ActionToString(ListConferenceProviders);
        ActionToString(ListDeviceEvents);
        ActionToString(ListGatewayGroups);
        ActionToString(ListGateways);
        ActionToString(ListSkills);
        ActionToString(ListSkillsStoreCategories);
        ActionToString(ListSkillsStoreSkillsByCategory);
        ActionToString(ListSmartHomeAppliances);
        ActionToString(ListTags);
        ActionToString(PutConferencePreference);
        ActionToString(PutInvitationConfiguration);
        ActionToString(PutRoomSkillParameter);
        ActionToString(PutSkillAuthorization);
        ActionToString(RegisterAVSDevice);
        ActionToString(RejectSkill);
        ActionToString(ResolveRoom);
        ActionToString(RevokeInvitation);
        ActionToString(SearchAddressBooks);
        ActionToString(SearchContacts);
        ActionToString(SearchDevices);
        ActionToString(SearchNetworkProfiles);
        ActionToString(SearchProfiles);
        ActionToString(SearchRooms);
        ActionToString(SearchSkillGroups);
        ActionToString(SearchUsers);
        ActionToString(SendAnnouncement);
        ActionToString(SendInvitation);
        ActionToString(StartDeviceSync);
        ActionToString(StartSmartHomeApplianceDiscovery);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAddressBook);
        ActionToString(UpdateBusinessReportSchedule);
        ActionToString(UpdateConferenceProvider);
        ActionToString(UpdateContact);
        ActionToString(UpdateDevice);
        ActionToString(UpdateGateway);
        ActionToString(UpdateGatewayGroup);
        ActionToString(UpdateNetworkProfile);
        ActionToString(UpdateProfile);
        ActionToString(UpdateRoom);
        ActionToString(UpdateSkillGroup);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace AlexaForBusiness
} // namespace QtAws
