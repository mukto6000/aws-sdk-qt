// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "lakeformationrequest.h"
#include "lakeformationrequest_p.h"

namespace QtAws {
namespace LakeFormation {

/*!
 * \class QtAws::LakeFormation::LakeFormationRequest
 * \brief The LakeFormationRequest class provides an interface for LakeFormation requests.
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * \enum LakeFormationRequest::Action
 *
 * This enum describes the actions that can be performed as LakeFormation
 * requests.
 *
 * \value AddLFTagsToResourceAction LakeFormation AddLFTagsToResource action.
 * \value AssumeDecoratedRoleWithSAMLAction LakeFormation AssumeDecoratedRoleWithSAML action.
 * \value BatchGrantPermissionsAction LakeFormation BatchGrantPermissions action.
 * \value BatchRevokePermissionsAction LakeFormation BatchRevokePermissions action.
 * \value CancelTransactionAction LakeFormation CancelTransaction action.
 * \value CommitTransactionAction LakeFormation CommitTransaction action.
 * \value CreateDataCellsFilterAction LakeFormation CreateDataCellsFilter action.
 * \value CreateLFTagAction LakeFormation CreateLFTag action.
 * \value DeleteDataCellsFilterAction LakeFormation DeleteDataCellsFilter action.
 * \value DeleteLFTagAction LakeFormation DeleteLFTag action.
 * \value DeleteObjectsOnCancelAction LakeFormation DeleteObjectsOnCancel action.
 * \value DeregisterResourceAction LakeFormation DeregisterResource action.
 * \value DescribeResourceAction LakeFormation DescribeResource action.
 * \value DescribeTransactionAction LakeFormation DescribeTransaction action.
 * \value ExtendTransactionAction LakeFormation ExtendTransaction action.
 * \value GetDataLakeSettingsAction LakeFormation GetDataLakeSettings action.
 * \value GetEffectivePermissionsForPathAction LakeFormation GetEffectivePermissionsForPath action.
 * \value GetLFTagAction LakeFormation GetLFTag action.
 * \value GetQueryStateAction LakeFormation GetQueryState action.
 * \value GetQueryStatisticsAction LakeFormation GetQueryStatistics action.
 * \value GetResourceLFTagsAction LakeFormation GetResourceLFTags action.
 * \value GetTableObjectsAction LakeFormation GetTableObjects action.
 * \value GetTemporaryGluePartitionCredentialsAction LakeFormation GetTemporaryGluePartitionCredentials action.
 * \value GetTemporaryGlueTableCredentialsAction LakeFormation GetTemporaryGlueTableCredentials action.
 * \value GetWorkUnitResultsAction LakeFormation GetWorkUnitResults action.
 * \value GetWorkUnitsAction LakeFormation GetWorkUnits action.
 * \value GrantPermissionsAction LakeFormation GrantPermissions action.
 * \value ListDataCellsFilterAction LakeFormation ListDataCellsFilter action.
 * \value ListLFTagsAction LakeFormation ListLFTags action.
 * \value ListPermissionsAction LakeFormation ListPermissions action.
 * \value ListResourcesAction LakeFormation ListResources action.
 * \value ListTableStorageOptimizersAction LakeFormation ListTableStorageOptimizers action.
 * \value ListTransactionsAction LakeFormation ListTransactions action.
 * \value PutDataLakeSettingsAction LakeFormation PutDataLakeSettings action.
 * \value RegisterResourceAction LakeFormation RegisterResource action.
 * \value RemoveLFTagsFromResourceAction LakeFormation RemoveLFTagsFromResource action.
 * \value RevokePermissionsAction LakeFormation RevokePermissions action.
 * \value SearchDatabasesByLFTagsAction LakeFormation SearchDatabasesByLFTags action.
 * \value SearchTablesByLFTagsAction LakeFormation SearchTablesByLFTags action.
 * \value StartQueryPlanningAction LakeFormation StartQueryPlanning action.
 * \value StartTransactionAction LakeFormation StartTransaction action.
 * \value UpdateLFTagAction LakeFormation UpdateLFTag action.
 * \value UpdateResourceAction LakeFormation UpdateResource action.
 * \value UpdateTableObjectsAction LakeFormation UpdateTableObjects action.
 * \value UpdateTableStorageOptimizerAction LakeFormation UpdateTableStorageOptimizer action.
 */

/*!
 * Constructs a LakeFormationRequest object for LakeFormation \a action.
 */
LakeFormationRequest::LakeFormationRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new LakeFormationRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
LakeFormationRequest::LakeFormationRequest(const LakeFormationRequest &other)
    : QtAws::Core::AwsAbstractRequest(new LakeFormationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the LakeFormationRequest object to be equal to \a other.
 */
LakeFormationRequest& LakeFormationRequest::operator=(const LakeFormationRequest &other)
{
    Q_D(LakeFormationRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa LakeFormationRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from LakeFormationRequestPrivate.
 */
LakeFormationRequest::LakeFormationRequest(LakeFormationRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the LakeFormation action to be performed by this request.
 */
LakeFormationRequest::Action LakeFormationRequest::action() const
{
    Q_D(const LakeFormationRequest);
    return d->action;
}

/*!
 * Returns the name of the LakeFormation action to be performed by this request.
 */
QString LakeFormationRequest::actionString() const
{
    return LakeFormationRequestPrivate::toString(action());
}

/*!
 * Returns the LakeFormation API version implemented by this request.
 */
QString LakeFormationRequest::apiVersion() const
{
    Q_D(const LakeFormationRequest);
    return d->apiVersion;
}

/*!
 * Sets the LakeFormation action to be performed by this request to \a action.
 */
void LakeFormationRequest::setAction(const Action action)
{
    Q_D(LakeFormationRequest);
    d->action = action;
}

/*!
 * Sets the LakeFormation API version to include in this request to \a version.
 */
void LakeFormationRequest::setApiVersion(const QString &version)
{
    Q_D(LakeFormationRequest);
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
bool LakeFormationRequest::operator==(const LakeFormationRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid LakeFormation queue name.
 *
 * @par From LakeFormation FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid LakeFormation queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool LakeFormationRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int LakeFormationRequest::clearParameter(const QString &name)
{
    Q_D(LakeFormationRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void LakeFormationRequest::clearParameters()
{
    Q_D(LakeFormationRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant LakeFormationRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const LakeFormationRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &LakeFormationRequest::parameters() const
{
    Q_D(const LakeFormationRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void LakeFormationRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(LakeFormationRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void LakeFormationRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(LakeFormationRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the LakeFormation request using the given
 * \a endpoint.
 *
 * This LakeFormation implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest LakeFormationRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const LakeFormationRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::LakeFormation::LakeFormationRequestPrivate
 * \brief The LakeFormationRequestPrivate class provides private implementation for LakeFormationRequest.
 * \internal
 *
 * \inmodule QtAwsLakeFormation
 */

/*!
 * Constructs a LakeFormationRequestPrivate object for LakeFormation \a action,
 * with public implementation \a q.
 */
LakeFormationRequestPrivate::LakeFormationRequestPrivate(const LakeFormationRequest::Action action, LakeFormationRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2017-03-31"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the LakeFormationRequest class's copy constructor.
 */
LakeFormationRequestPrivate::LakeFormationRequestPrivate(const LakeFormationRequestPrivate &other,
                                     LakeFormationRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts LakeFormationRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the LakeFormation service's Action
 * query parameters.
 */
QString LakeFormationRequestPrivate::toString(const LakeFormationRequest::Action &action)
{
    #define ActionToString(action) \
        case LakeFormationRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddLFTagsToResource);
        ActionToString(AssumeDecoratedRoleWithSAML);
        ActionToString(BatchGrantPermissions);
        ActionToString(BatchRevokePermissions);
        ActionToString(CancelTransaction);
        ActionToString(CommitTransaction);
        ActionToString(CreateDataCellsFilter);
        ActionToString(CreateLFTag);
        ActionToString(DeleteDataCellsFilter);
        ActionToString(DeleteLFTag);
        ActionToString(DeleteObjectsOnCancel);
        ActionToString(DeregisterResource);
        ActionToString(DescribeResource);
        ActionToString(DescribeTransaction);
        ActionToString(ExtendTransaction);
        ActionToString(GetDataLakeSettings);
        ActionToString(GetEffectivePermissionsForPath);
        ActionToString(GetLFTag);
        ActionToString(GetQueryState);
        ActionToString(GetQueryStatistics);
        ActionToString(GetResourceLFTags);
        ActionToString(GetTableObjects);
        ActionToString(GetTemporaryGluePartitionCredentials);
        ActionToString(GetTemporaryGlueTableCredentials);
        ActionToString(GetWorkUnitResults);
        ActionToString(GetWorkUnits);
        ActionToString(GrantPermissions);
        ActionToString(ListDataCellsFilter);
        ActionToString(ListLFTags);
        ActionToString(ListPermissions);
        ActionToString(ListResources);
        ActionToString(ListTableStorageOptimizers);
        ActionToString(ListTransactions);
        ActionToString(PutDataLakeSettings);
        ActionToString(RegisterResource);
        ActionToString(RemoveLFTagsFromResource);
        ActionToString(RevokePermissions);
        ActionToString(SearchDatabasesByLFTags);
        ActionToString(SearchTablesByLFTags);
        ActionToString(StartQueryPlanning);
        ActionToString(StartTransaction);
        ActionToString(UpdateLFTag);
        ActionToString(UpdateResource);
        ActionToString(UpdateTableObjects);
        ActionToString(UpdateTableStorageOptimizer);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace LakeFormation
} // namespace QtAws
