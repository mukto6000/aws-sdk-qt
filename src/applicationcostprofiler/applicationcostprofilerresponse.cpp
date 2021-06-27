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

#include "applicationcostprofilerresponse.h"
#include "applicationcostprofilerresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationCostProfiler {

/*!
 * \class QtAws::ApplicationCostProfiler::ApplicationCostProfilerResponse
 * \brief The ApplicationCostProfilerResponse class provides an interface for ApplicationCostProfiler responses.
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ApplicationCostProfilerResponse object with parent \a parent.
 */
ApplicationCostProfilerResponse::ApplicationCostProfilerResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new ApplicationCostProfilerResponsePrivate(this))
{

}

/*!
 * \internal
 * Constructs a ApplicationCostProfilerResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ApplicationCostProfilerResponsePrivate.
 */
ApplicationCostProfilerResponse::ApplicationCostProfilerResponse(ApplicationCostProfilerResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
{

}

/*!
 * \reimp
 */
void ApplicationCostProfilerResponse::parseFailure(QIODevice &response)
{
    //Q_D(ApplicationCostProfilerResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::ApplicationCostProfiler::ApplicationCostProfilerResponsePrivate
 * \brief The ApplicationCostProfilerResponsePrivate class provides private implementation for ApplicationCostProfilerResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationCostProfiler
 */

/*!
 * Constructs a ApplicationCostProfilerResponsePrivate object with public implementation \a q.
 */
ApplicationCostProfilerResponsePrivate::ApplicationCostProfilerResponsePrivate(
    ApplicationCostProfilerResponse * const q) : q_ptr(q)
{

}

} // namespace ApplicationCostProfiler
} // namespace QtAws
