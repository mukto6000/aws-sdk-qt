// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeffectivedeploymentsresponse.h"
#include "listeffectivedeploymentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListEffectiveDeploymentsResponse
 * \brief The ListEffectiveDeploymentsResponse class provides an interace for GreengrassV2 ListEffectiveDeployments responses.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge devices.
 *  This enables devices to collect and analyze data closer to the source of information, react autonomously to local
 *  events, and communicate securely with each other on local networks. Local devices can also communicate securely with
 *  Amazon Web Services IoT Core and export IoT data to the Amazon Web Services Cloud. IoT Greengrass developers can use
 *  Lambda functions and components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  IoT Greengrass Version 2 provides a new major version of the IoT Greengrass Core software, new APIs, and a new console.
 *  Use this API reference to learn how to use the IoT Greengrass V2 API operations to manage components, manage
 *  deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is IoT Greengrass?</a>
 *  in the <i>IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listEffectiveDeployments
 */

/*!
 * Constructs a ListEffectiveDeploymentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEffectiveDeploymentsResponse::ListEffectiveDeploymentsResponse(
        const ListEffectiveDeploymentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassV2Response(new ListEffectiveDeploymentsResponsePrivate(this), parent)
{
    setRequest(new ListEffectiveDeploymentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEffectiveDeploymentsRequest * ListEffectiveDeploymentsResponse::request() const
{
    Q_D(const ListEffectiveDeploymentsResponse);
    return static_cast<const ListEffectiveDeploymentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GreengrassV2 ListEffectiveDeployments \a response.
 */
void ListEffectiveDeploymentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEffectiveDeploymentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GreengrassV2::ListEffectiveDeploymentsResponsePrivate
 * \brief The ListEffectiveDeploymentsResponsePrivate class provides private implementation for ListEffectiveDeploymentsResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListEffectiveDeploymentsResponsePrivate object with public implementation \a q.
 */
ListEffectiveDeploymentsResponsePrivate::ListEffectiveDeploymentsResponsePrivate(
    ListEffectiveDeploymentsResponse * const q) : GreengrassV2ResponsePrivate(q)
{

}

/*!
 * Parses a GreengrassV2 ListEffectiveDeployments response element from \a xml.
 */
void ListEffectiveDeploymentsResponsePrivate::parseListEffectiveDeploymentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEffectiveDeploymentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GreengrassV2
} // namespace QtAws
