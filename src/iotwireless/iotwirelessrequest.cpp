// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotwirelessrequest.h"
#include "iotwirelessrequest_p.h"

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::IoTWirelessRequest
 * \brief The IoTWirelessRequest class provides an interface for IoTWireless requests.
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * \enum IoTWirelessRequest::Action
 *
 * This enum describes the actions that can be performed as IoTWireless
 * requests.
 *
 * \value AssociateAwsAccountWithPartnerAccountAction IoTWireless AssociateAwsAccountWithPartnerAccount action.
 * \value AssociateMulticastGroupWithFuotaTaskAction IoTWireless AssociateMulticastGroupWithFuotaTask action.
 * \value AssociateWirelessDeviceWithFuotaTaskAction IoTWireless AssociateWirelessDeviceWithFuotaTask action.
 * \value AssociateWirelessDeviceWithMulticastGroupAction IoTWireless AssociateWirelessDeviceWithMulticastGroup action.
 * \value AssociateWirelessDeviceWithThingAction IoTWireless AssociateWirelessDeviceWithThing action.
 * \value AssociateWirelessGatewayWithCertificateAction IoTWireless AssociateWirelessGatewayWithCertificate action.
 * \value AssociateWirelessGatewayWithThingAction IoTWireless AssociateWirelessGatewayWithThing action.
 * \value CancelMulticastGroupSessionAction IoTWireless CancelMulticastGroupSession action.
 * \value CreateDestinationAction IoTWireless CreateDestination action.
 * \value CreateDeviceProfileAction IoTWireless CreateDeviceProfile action.
 * \value CreateFuotaTaskAction IoTWireless CreateFuotaTask action.
 * \value CreateMulticastGroupAction IoTWireless CreateMulticastGroup action.
 * \value CreateNetworkAnalyzerConfigurationAction IoTWireless CreateNetworkAnalyzerConfiguration action.
 * \value CreateServiceProfileAction IoTWireless CreateServiceProfile action.
 * \value CreateWirelessDeviceAction IoTWireless CreateWirelessDevice action.
 * \value CreateWirelessGatewayAction IoTWireless CreateWirelessGateway action.
 * \value CreateWirelessGatewayTaskAction IoTWireless CreateWirelessGatewayTask action.
 * \value CreateWirelessGatewayTaskDefinitionAction IoTWireless CreateWirelessGatewayTaskDefinition action.
 * \value DeleteDestinationAction IoTWireless DeleteDestination action.
 * \value DeleteDeviceProfileAction IoTWireless DeleteDeviceProfile action.
 * \value DeleteFuotaTaskAction IoTWireless DeleteFuotaTask action.
 * \value DeleteMulticastGroupAction IoTWireless DeleteMulticastGroup action.
 * \value DeleteNetworkAnalyzerConfigurationAction IoTWireless DeleteNetworkAnalyzerConfiguration action.
 * \value DeleteQueuedMessagesAction IoTWireless DeleteQueuedMessages action.
 * \value DeleteServiceProfileAction IoTWireless DeleteServiceProfile action.
 * \value DeleteWirelessDeviceAction IoTWireless DeleteWirelessDevice action.
 * \value DeleteWirelessGatewayAction IoTWireless DeleteWirelessGateway action.
 * \value DeleteWirelessGatewayTaskAction IoTWireless DeleteWirelessGatewayTask action.
 * \value DeleteWirelessGatewayTaskDefinitionAction IoTWireless DeleteWirelessGatewayTaskDefinition action.
 * \value DisassociateAwsAccountFromPartnerAccountAction IoTWireless DisassociateAwsAccountFromPartnerAccount action.
 * \value DisassociateMulticastGroupFromFuotaTaskAction IoTWireless DisassociateMulticastGroupFromFuotaTask action.
 * \value DisassociateWirelessDeviceFromFuotaTaskAction IoTWireless DisassociateWirelessDeviceFromFuotaTask action.
 * \value DisassociateWirelessDeviceFromMulticastGroupAction IoTWireless DisassociateWirelessDeviceFromMulticastGroup action.
 * \value DisassociateWirelessDeviceFromThingAction IoTWireless DisassociateWirelessDeviceFromThing action.
 * \value DisassociateWirelessGatewayFromCertificateAction IoTWireless DisassociateWirelessGatewayFromCertificate action.
 * \value DisassociateWirelessGatewayFromThingAction IoTWireless DisassociateWirelessGatewayFromThing action.
 * \value GetDestinationAction IoTWireless GetDestination action.
 * \value GetDeviceProfileAction IoTWireless GetDeviceProfile action.
 * \value GetEventConfigurationByResourceTypesAction IoTWireless GetEventConfigurationByResourceTypes action.
 * \value GetFuotaTaskAction IoTWireless GetFuotaTask action.
 * \value GetLogLevelsByResourceTypesAction IoTWireless GetLogLevelsByResourceTypes action.
 * \value GetMulticastGroupAction IoTWireless GetMulticastGroup action.
 * \value GetMulticastGroupSessionAction IoTWireless GetMulticastGroupSession action.
 * \value GetNetworkAnalyzerConfigurationAction IoTWireless GetNetworkAnalyzerConfiguration action.
 * \value GetPartnerAccountAction IoTWireless GetPartnerAccount action.
 * \value GetPositionAction IoTWireless GetPosition action.
 * \value GetPositionConfigurationAction IoTWireless GetPositionConfiguration action.
 * \value GetResourceEventConfigurationAction IoTWireless GetResourceEventConfiguration action.
 * \value GetResourceLogLevelAction IoTWireless GetResourceLogLevel action.
 * \value GetServiceEndpointAction IoTWireless GetServiceEndpoint action.
 * \value GetServiceProfileAction IoTWireless GetServiceProfile action.
 * \value GetWirelessDeviceAction IoTWireless GetWirelessDevice action.
 * \value GetWirelessDeviceStatisticsAction IoTWireless GetWirelessDeviceStatistics action.
 * \value GetWirelessGatewayAction IoTWireless GetWirelessGateway action.
 * \value GetWirelessGatewayCertificateAction IoTWireless GetWirelessGatewayCertificate action.
 * \value GetWirelessGatewayFirmwareInformationAction IoTWireless GetWirelessGatewayFirmwareInformation action.
 * \value GetWirelessGatewayStatisticsAction IoTWireless GetWirelessGatewayStatistics action.
 * \value GetWirelessGatewayTaskAction IoTWireless GetWirelessGatewayTask action.
 * \value GetWirelessGatewayTaskDefinitionAction IoTWireless GetWirelessGatewayTaskDefinition action.
 * \value ListDestinationsAction IoTWireless ListDestinations action.
 * \value ListDeviceProfilesAction IoTWireless ListDeviceProfiles action.
 * \value ListEventConfigurationsAction IoTWireless ListEventConfigurations action.
 * \value ListFuotaTasksAction IoTWireless ListFuotaTasks action.
 * \value ListMulticastGroupsAction IoTWireless ListMulticastGroups action.
 * \value ListMulticastGroupsByFuotaTaskAction IoTWireless ListMulticastGroupsByFuotaTask action.
 * \value ListNetworkAnalyzerConfigurationsAction IoTWireless ListNetworkAnalyzerConfigurations action.
 * \value ListPartnerAccountsAction IoTWireless ListPartnerAccounts action.
 * \value ListPositionConfigurationsAction IoTWireless ListPositionConfigurations action.
 * \value ListQueuedMessagesAction IoTWireless ListQueuedMessages action.
 * \value ListServiceProfilesAction IoTWireless ListServiceProfiles action.
 * \value ListTagsForResourceAction IoTWireless ListTagsForResource action.
 * \value ListWirelessDevicesAction IoTWireless ListWirelessDevices action.
 * \value ListWirelessGatewayTaskDefinitionsAction IoTWireless ListWirelessGatewayTaskDefinitions action.
 * \value ListWirelessGatewaysAction IoTWireless ListWirelessGateways action.
 * \value PutPositionConfigurationAction IoTWireless PutPositionConfiguration action.
 * \value PutResourceLogLevelAction IoTWireless PutResourceLogLevel action.
 * \value ResetAllResourceLogLevelsAction IoTWireless ResetAllResourceLogLevels action.
 * \value ResetResourceLogLevelAction IoTWireless ResetResourceLogLevel action.
 * \value SendDataToMulticastGroupAction IoTWireless SendDataToMulticastGroup action.
 * \value SendDataToWirelessDeviceAction IoTWireless SendDataToWirelessDevice action.
 * \value StartBulkAssociateWirelessDeviceWithMulticastGroupAction IoTWireless StartBulkAssociateWirelessDeviceWithMulticastGroup action.
 * \value StartBulkDisassociateWirelessDeviceFromMulticastGroupAction IoTWireless StartBulkDisassociateWirelessDeviceFromMulticastGroup action.
 * \value StartFuotaTaskAction IoTWireless StartFuotaTask action.
 * \value StartMulticastGroupSessionAction IoTWireless StartMulticastGroupSession action.
 * \value TagResourceAction IoTWireless TagResource action.
 * \value TestWirelessDeviceAction IoTWireless TestWirelessDevice action.
 * \value UntagResourceAction IoTWireless UntagResource action.
 * \value UpdateDestinationAction IoTWireless UpdateDestination action.
 * \value UpdateEventConfigurationByResourceTypesAction IoTWireless UpdateEventConfigurationByResourceTypes action.
 * \value UpdateFuotaTaskAction IoTWireless UpdateFuotaTask action.
 * \value UpdateLogLevelsByResourceTypesAction IoTWireless UpdateLogLevelsByResourceTypes action.
 * \value UpdateMulticastGroupAction IoTWireless UpdateMulticastGroup action.
 * \value UpdateNetworkAnalyzerConfigurationAction IoTWireless UpdateNetworkAnalyzerConfiguration action.
 * \value UpdatePartnerAccountAction IoTWireless UpdatePartnerAccount action.
 * \value UpdatePositionAction IoTWireless UpdatePosition action.
 * \value UpdateResourceEventConfigurationAction IoTWireless UpdateResourceEventConfiguration action.
 * \value UpdateWirelessDeviceAction IoTWireless UpdateWirelessDevice action.
 * \value UpdateWirelessGatewayAction IoTWireless UpdateWirelessGateway action.
 */

/*!
 * Constructs a IoTWirelessRequest object for IoTWireless \a action.
 */
IoTWirelessRequest::IoTWirelessRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new IoTWirelessRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
IoTWirelessRequest::IoTWirelessRequest(const IoTWirelessRequest &other)
    : QtAws::Core::AwsAbstractRequest(new IoTWirelessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the IoTWirelessRequest object to be equal to \a other.
 */
IoTWirelessRequest& IoTWirelessRequest::operator=(const IoTWirelessRequest &other)
{
    Q_D(IoTWirelessRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa IoTWirelessRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from IoTWirelessRequestPrivate.
 */
IoTWirelessRequest::IoTWirelessRequest(IoTWirelessRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the IoTWireless action to be performed by this request.
 */
IoTWirelessRequest::Action IoTWirelessRequest::action() const
{
    Q_D(const IoTWirelessRequest);
    return d->action;
}

/*!
 * Returns the name of the IoTWireless action to be performed by this request.
 */
QString IoTWirelessRequest::actionString() const
{
    return IoTWirelessRequestPrivate::toString(action());
}

/*!
 * Returns the IoTWireless API version implemented by this request.
 */
QString IoTWirelessRequest::apiVersion() const
{
    Q_D(const IoTWirelessRequest);
    return d->apiVersion;
}

/*!
 * Sets the IoTWireless action to be performed by this request to \a action.
 */
void IoTWirelessRequest::setAction(const Action action)
{
    Q_D(IoTWirelessRequest);
    d->action = action;
}

/*!
 * Sets the IoTWireless API version to include in this request to \a version.
 */
void IoTWirelessRequest::setApiVersion(const QString &version)
{
    Q_D(IoTWirelessRequest);
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
bool IoTWirelessRequest::operator==(const IoTWirelessRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid IoTWireless queue name.
 *
 * @par From IoTWireless FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid IoTWireless queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool IoTWirelessRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int IoTWirelessRequest::clearParameter(const QString &name)
{
    Q_D(IoTWirelessRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void IoTWirelessRequest::clearParameters()
{
    Q_D(IoTWirelessRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant IoTWirelessRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const IoTWirelessRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &IoTWirelessRequest::parameters() const
{
    Q_D(const IoTWirelessRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void IoTWirelessRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(IoTWirelessRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void IoTWirelessRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(IoTWirelessRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the IoTWireless request using the given
 * \a endpoint.
 *
 * This IoTWireless implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest IoTWirelessRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const IoTWirelessRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::IoTWireless::IoTWirelessRequestPrivate
 * \brief The IoTWirelessRequestPrivate class provides private implementation for IoTWirelessRequest.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a IoTWirelessRequestPrivate object for IoTWireless \a action,
 * with public implementation \a q.
 */
IoTWirelessRequestPrivate::IoTWirelessRequestPrivate(const IoTWirelessRequest::Action action, IoTWirelessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2020-11-22"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the IoTWirelessRequest class's copy constructor.
 */
IoTWirelessRequestPrivate::IoTWirelessRequestPrivate(const IoTWirelessRequestPrivate &other,
                                     IoTWirelessRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts IoTWirelessRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the IoTWireless service's Action
 * query parameters.
 */
QString IoTWirelessRequestPrivate::toString(const IoTWirelessRequest::Action &action)
{
    #define ActionToString(action) \
        case IoTWirelessRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociateAwsAccountWithPartnerAccount);
        ActionToString(AssociateMulticastGroupWithFuotaTask);
        ActionToString(AssociateWirelessDeviceWithFuotaTask);
        ActionToString(AssociateWirelessDeviceWithMulticastGroup);
        ActionToString(AssociateWirelessDeviceWithThing);
        ActionToString(AssociateWirelessGatewayWithCertificate);
        ActionToString(AssociateWirelessGatewayWithThing);
        ActionToString(CancelMulticastGroupSession);
        ActionToString(CreateDestination);
        ActionToString(CreateDeviceProfile);
        ActionToString(CreateFuotaTask);
        ActionToString(CreateMulticastGroup);
        ActionToString(CreateNetworkAnalyzerConfiguration);
        ActionToString(CreateServiceProfile);
        ActionToString(CreateWirelessDevice);
        ActionToString(CreateWirelessGateway);
        ActionToString(CreateWirelessGatewayTask);
        ActionToString(CreateWirelessGatewayTaskDefinition);
        ActionToString(DeleteDestination);
        ActionToString(DeleteDeviceProfile);
        ActionToString(DeleteFuotaTask);
        ActionToString(DeleteMulticastGroup);
        ActionToString(DeleteNetworkAnalyzerConfiguration);
        ActionToString(DeleteQueuedMessages);
        ActionToString(DeleteServiceProfile);
        ActionToString(DeleteWirelessDevice);
        ActionToString(DeleteWirelessGateway);
        ActionToString(DeleteWirelessGatewayTask);
        ActionToString(DeleteWirelessGatewayTaskDefinition);
        ActionToString(DisassociateAwsAccountFromPartnerAccount);
        ActionToString(DisassociateMulticastGroupFromFuotaTask);
        ActionToString(DisassociateWirelessDeviceFromFuotaTask);
        ActionToString(DisassociateWirelessDeviceFromMulticastGroup);
        ActionToString(DisassociateWirelessDeviceFromThing);
        ActionToString(DisassociateWirelessGatewayFromCertificate);
        ActionToString(DisassociateWirelessGatewayFromThing);
        ActionToString(GetDestination);
        ActionToString(GetDeviceProfile);
        ActionToString(GetEventConfigurationByResourceTypes);
        ActionToString(GetFuotaTask);
        ActionToString(GetLogLevelsByResourceTypes);
        ActionToString(GetMulticastGroup);
        ActionToString(GetMulticastGroupSession);
        ActionToString(GetNetworkAnalyzerConfiguration);
        ActionToString(GetPartnerAccount);
        ActionToString(GetPosition);
        ActionToString(GetPositionConfiguration);
        ActionToString(GetResourceEventConfiguration);
        ActionToString(GetResourceLogLevel);
        ActionToString(GetServiceEndpoint);
        ActionToString(GetServiceProfile);
        ActionToString(GetWirelessDevice);
        ActionToString(GetWirelessDeviceStatistics);
        ActionToString(GetWirelessGateway);
        ActionToString(GetWirelessGatewayCertificate);
        ActionToString(GetWirelessGatewayFirmwareInformation);
        ActionToString(GetWirelessGatewayStatistics);
        ActionToString(GetWirelessGatewayTask);
        ActionToString(GetWirelessGatewayTaskDefinition);
        ActionToString(ListDestinations);
        ActionToString(ListDeviceProfiles);
        ActionToString(ListEventConfigurations);
        ActionToString(ListFuotaTasks);
        ActionToString(ListMulticastGroups);
        ActionToString(ListMulticastGroupsByFuotaTask);
        ActionToString(ListNetworkAnalyzerConfigurations);
        ActionToString(ListPartnerAccounts);
        ActionToString(ListPositionConfigurations);
        ActionToString(ListQueuedMessages);
        ActionToString(ListServiceProfiles);
        ActionToString(ListTagsForResource);
        ActionToString(ListWirelessDevices);
        ActionToString(ListWirelessGatewayTaskDefinitions);
        ActionToString(ListWirelessGateways);
        ActionToString(PutPositionConfiguration);
        ActionToString(PutResourceLogLevel);
        ActionToString(ResetAllResourceLogLevels);
        ActionToString(ResetResourceLogLevel);
        ActionToString(SendDataToMulticastGroup);
        ActionToString(SendDataToWirelessDevice);
        ActionToString(StartBulkAssociateWirelessDeviceWithMulticastGroup);
        ActionToString(StartBulkDisassociateWirelessDeviceFromMulticastGroup);
        ActionToString(StartFuotaTask);
        ActionToString(StartMulticastGroupSession);
        ActionToString(TagResource);
        ActionToString(TestWirelessDevice);
        ActionToString(UntagResource);
        ActionToString(UpdateDestination);
        ActionToString(UpdateEventConfigurationByResourceTypes);
        ActionToString(UpdateFuotaTask);
        ActionToString(UpdateLogLevelsByResourceTypes);
        ActionToString(UpdateMulticastGroup);
        ActionToString(UpdateNetworkAnalyzerConfiguration);
        ActionToString(UpdatePartnerAccount);
        ActionToString(UpdatePosition);
        ActionToString(UpdateResourceEventConfiguration);
        ActionToString(UpdateWirelessDevice);
        ActionToString(UpdateWirelessGateway);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace IoTWireless
} // namespace QtAws
