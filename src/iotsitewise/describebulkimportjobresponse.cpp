/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describebulkimportjobresponse.h"
#include "describebulkimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeBulkImportJobResponse
 * \brief The DescribeBulkImportJobResponse class provides an interace for IoTSiteWise DescribeBulkImportJob responses.
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
 * \sa IoTSiteWiseClient::describeBulkImportJob
 */

/*!
 * Constructs a DescribeBulkImportJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBulkImportJobResponse::DescribeBulkImportJobResponse(
        const DescribeBulkImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTSiteWiseResponse(new DescribeBulkImportJobResponsePrivate(this), parent)
{
    setRequest(new DescribeBulkImportJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBulkImportJobRequest * DescribeBulkImportJobResponse::request() const
{
    Q_D(const DescribeBulkImportJobResponse);
    return static_cast<const DescribeBulkImportJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTSiteWise DescribeBulkImportJob \a response.
 */
void DescribeBulkImportJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBulkImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTSiteWise::DescribeBulkImportJobResponsePrivate
 * \brief The DescribeBulkImportJobResponsePrivate class provides private implementation for DescribeBulkImportJobResponse.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeBulkImportJobResponsePrivate object with public implementation \a q.
 */
DescribeBulkImportJobResponsePrivate::DescribeBulkImportJobResponsePrivate(
    DescribeBulkImportJobResponse * const q) : IoTSiteWiseResponsePrivate(q)
{

}

/*!
 * Parses a IoTSiteWise DescribeBulkImportJob response element from \a xml.
 */
void DescribeBulkImportJobResponsePrivate::parseDescribeBulkImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBulkImportJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTSiteWise
} // namespace QtAws
