// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateassetsresponse.h"
#include "associateassetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::AssociateAssetsResponse
 * \brief The AssociateAssetsResponse class provides an interace for IoTSiteWise AssociateAssets responses.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::associateAssets
 */

/*!
 * Constructs a AssociateAssetsResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateAssetsResponse::AssociateAssetsResponse(
        const AssociateAssetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new AssociateAssetsResponsePrivate(this), parent)
{
    setRequest(new AssociateAssetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateAssetsRequest * AssociateAssetsResponse::request() const
{
    Q_D(const AssociateAssetsResponse);
    return static_cast<const AssociateAssetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise AssociateAssets \a response.
 */
void AssociateAssetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateAssetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::AssociateAssetsResponsePrivate
 * \brief The AssociateAssetsResponsePrivate class provides private implementation for AssociateAssetsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a AssociateAssetsResponsePrivate object with public implementation \a q.
 */
AssociateAssetsResponsePrivate::AssociateAssetsResponsePrivate(
    AssociateAssetsResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise AssociateAssets response element from \a xml.
 */
void AssociateAssetsResponsePrivate::parseAssociateAssetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateAssetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
