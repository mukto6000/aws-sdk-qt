// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoprunresponse.h"
#include "stoprunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopRunResponse
 * \brief The StopRunResponse class provides an interace for DeviceFarm StopRun responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
 *
 * \sa DeviceFarmClient::stopRun
 */

/*!
 * Constructs a StopRunResponse object for \a reply to \a request, with parent \a parent.
 */
StopRunResponse::StopRunResponse(
        const StopRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new StopRunResponsePrivate(this), parent)
{
    setRequest(new StopRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopRunRequest * StopRunResponse::request() const
{
    Q_D(const StopRunResponse);
    return static_cast<const StopRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm StopRun \a response.
 */
void StopRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::StopRunResponsePrivate
 * \brief The StopRunResponsePrivate class provides private implementation for StopRunResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopRunResponsePrivate object with public implementation \a q.
 */
StopRunResponsePrivate::StopRunResponsePrivate(
    StopRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm StopRun response element from \a xml.
 */
void StopRunResponsePrivate::parseStopRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
