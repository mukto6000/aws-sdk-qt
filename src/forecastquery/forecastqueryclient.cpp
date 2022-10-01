// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forecastqueryclient.h"
#include "forecastqueryclient_p.h"

#include "core/awssignaturev4.h"
#include "queryforecastrequest.h"
#include "queryforecastresponse.h"
#include "querywhatifforecastrequest.h"
#include "querywhatifforecastresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ForecastQuery
 * \brief Contains classess for accessing Amazon Forecast Query Service.
 *
 * \inmodule QtAwsForecastQuery
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ForecastQuery {

/*!
 * \class QtAws::ForecastQuery::ForecastQueryClient
 * \brief The ForecastQueryClient class provides access to the Amazon Forecast Query Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsForecastQuery
 *
 *  Provides APIs for creating and managing Amazon Forecast
 */

/*!
 * \brief Constructs a ForecastQueryClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ForecastQueryClient::ForecastQueryClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ForecastQueryClientPrivate(this), parent)
{
    Q_D(ForecastQueryClient);
    d->apiVersion = QStringLiteral("2018-06-26");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("forecastquery");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Forecast Query Service");
    d->serviceName = QStringLiteral("forecast");
}

/*!
 * \overload ForecastQueryClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ForecastQueryClient::ForecastQueryClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ForecastQueryClientPrivate(this), parent)
{
    Q_D(ForecastQueryClient);
    d->apiVersion = QStringLiteral("2018-06-26");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("forecastquery");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Forecast Query Service");
    d->serviceName = QStringLiteral("forecast");
}

/*!
 * Sends \a request to the ForecastQueryClient service, and returns a pointer to an
 * QueryForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a forecast for a single item, filtered by the supplied
 *
 * criteria>
 *
 * The criteria is a key-value pair. The key is either <code>item_id</code> (or the equivalent non-timestamp, non-target
 * field) from the <code>TARGET_TIME_SERIES</code> dataset, or one of the forecast dimensions specified as part of the
 * <code>FeaturizationConfig</code>
 *
 * object>
 *
 * By default, <code>QueryForecast</code> returns the complete date range for the filtered forecast. You can request a
 * specific date
 *
 * range>
 *
 * To get the full forecast, use the <a
 * href="https://docs.aws.amazon.com/en_us/forecast/latest/dg/API_CreateForecastExportJob.html">CreateForecastExportJob</a>
 *
 * operation> <note>
 *
 * The forecasts generated by Amazon Forecast are in the same timezone as the dataset that was used to create the
 */
QueryForecastResponse * ForecastQueryClient::queryForecast(const QueryForecastRequest &request)
{
    return qobject_cast<QueryForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the ForecastQueryClient service, and returns a pointer to an
 * QueryWhatIfForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a what-if
 */
QueryWhatIfForecastResponse * ForecastQueryClient::queryWhatIfForecast(const QueryWhatIfForecastRequest &request)
{
    return qobject_cast<QueryWhatIfForecastResponse *>(send(request));
}

/*!
 * \class QtAws::ForecastQuery::ForecastQueryClientPrivate
 * \brief The ForecastQueryClientPrivate class provides private implementation for ForecastQueryClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsForecastQuery
 */

/*!
 * Constructs a ForecastQueryClientPrivate object with public implementation \a q.
 */
ForecastQueryClientPrivate::ForecastQueryClientPrivate(ForecastQueryClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ForecastQuery
} // namespace QtAws
