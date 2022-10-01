// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "schedulerunresponse.h"
#include "schedulerunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ScheduleRunResponse
 * \brief The ScheduleRunResponse class provides an interace for DeviceFarm ScheduleRun responses.
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
 * \sa DeviceFarmClient::scheduleRun
 */

/*!
 * Constructs a ScheduleRunResponse object for \a reply to \a request, with parent \a parent.
 */
ScheduleRunResponse::ScheduleRunResponse(
        const ScheduleRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ScheduleRunResponsePrivate(this), parent)
{
    setRequest(new ScheduleRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ScheduleRunRequest * ScheduleRunResponse::request() const
{
    Q_D(const ScheduleRunResponse);
    return static_cast<const ScheduleRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm ScheduleRun \a response.
 */
void ScheduleRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ScheduleRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::ScheduleRunResponsePrivate
 * \brief The ScheduleRunResponsePrivate class provides private implementation for ScheduleRunResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ScheduleRunResponsePrivate object with public implementation \a q.
 */
ScheduleRunResponsePrivate::ScheduleRunResponsePrivate(
    ScheduleRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm ScheduleRun response element from \a xml.
 */
void ScheduleRunResponsePrivate::parseScheduleRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScheduleRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
